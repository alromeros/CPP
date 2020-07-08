/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:31:40 by alromero          #+#    #+#             */
/*   Updated: 2020/07/08 13:54:44 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern  someRandomIntern;
	Bureaucrat k("k", 1);

	Form*   rrf;
	Form*	otro;
	Form*	otre;
	Form*	error;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	otro = someRandomIntern.makeForm("Shrubbery Creation form", "home");
	otre = someRandomIntern.makeForm("prEsiDentIAL PARDON FORM", "Yo");
	error = someRandomIntern.makeForm("roboootomy request", "Bender");
	try
	{
		otro->execute(k);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	otro->beSigned(k);
	otro->execute(k);
	otre->beSigned(k);
	otre->execute(k);
	rrf->beSigned(k);
	rrf->execute(k);
	error->beSigned(k);
	error->execute(k);

	delete (rrf);
	delete otro;
	delete otre;
	delete error;
}