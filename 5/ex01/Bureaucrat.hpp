/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:31:38 by alromero          #+#    #+#             */
/*   Updated: 2020/07/08 11:20:33 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string const	name;
		int					grade;				
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat( Bureaucrat const &other );
		Bureaucrat& operator=( Bureaucrat const &other );
		virtual ~Bureaucrat();

		void				signForm(Form& paper);

		std::string			getName(void)	const;
		int					getGrade(void) const;
		void				setName(std::string const name);
		void				setGrade(int);
		void				gradeDecrement(void);
		void				gradeIncrement(void);

		class				GradeTooLowException: public std::exception
		{
			protected:
				std::string error_message;
			public:
				GradeTooLowException();
				GradeTooLowException( const GradeTooLowException &other );
				virtual ~GradeTooLowException();
				GradeTooLowException& operator=( const GradeTooLowException &other );
				
				virtual const char* what() const throw ();
		};
		
		class				GradeTooHighException: public std::exception
		{
			protected:
				std::string error_message;
			public:
				GradeTooHighException();
				GradeTooHighException( const GradeTooHighException &other );
				virtual ~GradeTooHighException();
				GradeTooHighException& operator=( const GradeTooHighException &other );

				virtual const char* what() const throw ();
		};		
};

std::ostream& operator<<(std::ostream &out, Bureaucrat const &other );

#endif
