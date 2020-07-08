/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 16:00:24 by alromero          #+#    #+#             */
/*   Updated: 2020/07/08 19:08:30 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		static std::string const	keywords[6];
		Form						*types[6];
		Form*						returnForm(int index, std::string target);
	public:

		Intern();
		Intern( Intern const &other );
		Intern& operator=( Intern const &other );
		virtual ~Intern();
		
		Form*	makeForm(std::string type, std::string name);
};

#endif