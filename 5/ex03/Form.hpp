/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 21:28:49 by alromero          #+#    #+#             */
/*   Updated: 2020/07/08 19:49:57 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string	const	name;
		bool				sign;
		int	const			gradeSign;
		int	const			gradeExe;
	public:
		Form();
		virtual ~Form();
		Form( Form const &other );
		Form( std::string const name, int sign, int exe );
		Form&	operator=( Form const &other );

		void				beSigned(Bureaucrat& k);
		virtual void		execute(Bureaucrat const & executor) const;
		virtual Form*		clone();

		void				setName(std::string const name);
		void				setSign(bool sign);
		void				setGradeSign(int const gradeSign);
		void				setGradeExe(int const gradeExe);
		std::string			getName() const;
		bool				getSign() const;
		int					getGradeSign() const;
		int					getGradeExe() const;

		class				GradeTooLowException: public std::exception
		{
			protected:
				std::string error_message;
			public:
				GradeTooLowException();
				GradeTooLowException( const GradeTooLowException &other );
				virtual ~GradeTooLowException() throw();
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
				virtual ~GradeTooHighException() throw();
				GradeTooHighException& operator=( const GradeTooHighException &other );

				virtual const char* what() const throw ();
		};

		class				FormNotSigned: public std::exception
		{
			protected:
				std::string error_message;
			public:
				FormNotSigned();
				FormNotSigned( const FormNotSigned &other );
				virtual ~FormNotSigned() throw();
				FormNotSigned& operator=( const FormNotSigned &other );

				virtual const char* what() const throw ();
		};
};

std::ostream&	operator<<(std::ostream& out, Form const &other);

#endif