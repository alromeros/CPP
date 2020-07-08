/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 18:15:52 by alromero          #+#    #+#             */
/*   Updated: 2020/07/08 19:12:40 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
#define OFFICEBLOCK_HPP

#include "Bureaucrat.hpp"
#include "Intern.hpp"

class OfficeBlock
{
	private:
		Intern		*yo;
		Bureaucrat	*superiorSign;
		Bureaucrat	*superiorExe;
	public:
		OfficeBlock(Intern *yo, Bureaucrat *superiorSign, Bureaucrat *superiorExe);
		OfficeBlock();
		virtual ~OfficeBlock();

		void		setYo(Intern *yo);
		void		setSuperiorSign(Bureaucrat *superior);
		void		setSuperiorExe(Bureaucrat *superior);
		Intern		*getYo() const;
		Bureaucrat	*getSuperiorSign() const;
		Bureaucrat	*getSuperiorExe() const;
		
		void 	doBureaucracy(std::string type, std::string target);

		class	NullBureaucrat: public std::exception
		{
			protected:
				std::string error_message;
			public:
				NullBureaucrat();
				NullBureaucrat( const NullBureaucrat &other );
				virtual ~NullBureaucrat();
				NullBureaucrat& operator=( const NullBureaucrat &other );
				
				virtual const char* what() const throw ();
		};

		class	NullIntern: public std::exception
		{
			protected:
				std::string error_message;
			public:
				NullIntern();
				NullIntern( const NullIntern &other );
				virtual ~NullIntern();
				NullIntern& operator=( const NullIntern &other );
				
				virtual const char* what() const throw ();
		};

		class	SameBureaucrats: public std::exception
		{
			protected:
				std::string error_message;
			public:
				SameBureaucrats();
				SameBureaucrats( const SameBureaucrats &other );
				virtual ~SameBureaucrats();
				SameBureaucrats& operator=( const SameBureaucrats &other );
				
				virtual const char* what() const throw ();
		};
};

#endif