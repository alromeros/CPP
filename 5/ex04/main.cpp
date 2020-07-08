/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:31:40 by alromero          #+#    #+#             */
/*   Updated: 2020/07/08 19:18:56 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int main()
{
	Intern  someRandomIntern;
	Bureaucrat *k = new Bureaucrat("k", 1);
	Bureaucrat *q = new Bureaucrat("q", 1);

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
		otro->execute(*k);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	otro->beSigned(*k);
	otro->execute(*k);
	otre->beSigned(*k);
	otre->execute(*k);
	rrf->beSigned(*k);
	rrf->execute(*k);
	error->beSigned(*k);
	error->execute(*k);

	Intern		*randomIntern = new Intern;
	OfficeBlock	*distritoTelefonica = new OfficeBlock(randomIntern, k, q);

	distritoTelefonica->doBureaucracy("robOTOMY rEQUEST", "B2");
	distritoTelefonica->doBureaucracy("Shrubbery creation", "mi casa");
	distritoTelefonica->doBureaucracy("prEsiDentIAL PARDON FORM", "Tu");
	distritoTelefonica->doBureaucracy("robOToiuoiuoiuEST", "B2");

	delete (rrf);
	delete distritoTelefonica;
	delete k;
	delete q;
	delete randomIntern;
	delete otro;
	delete otre;
	delete error;

	Intern *idiotOne = new Intern;
	Bureaucrat  *hermes = new Bureaucrat("Hermes Conrad", 37);
	Bureaucrat  *bob = new Bureaucrat("Bobby Bobson", 123);
	OfficeBlock ob;

	ob.setYo(idiotOne);
	ob.setSuperiorSign(bob);
	ob.setSuperiorExe(hermes);
	try
	{
		ob.setSuperiorExe(bob);
		ob.doBureaucracy("mutant pig termination", "Pigley");
	}
	catch(OfficeBlock::SameBureaucrats & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	delete idiotOne;
	delete hermes;
	delete bob;
}