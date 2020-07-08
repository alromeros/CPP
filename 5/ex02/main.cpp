/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:31:40 by alromero          #+#    #+#             */
/*   Updated: 2020/07/08 18:00:32 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat	*k = new Bureaucrat("K", 149);
	Bureaucrat	*gregor;
	try
	{
		gregor = new Bureaucrat("Gregor", 200);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}	
	Form		*admission = new Form("Admisión", 20, 20);
	Form		*formulario = new Form("Formulario", 150, 150);
	delete 		formulario;

	try
	{
		formulario = new Form("Formulario", 151, 151);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << *k;
		k->gradeDecrement();
		k->gradeDecrement();
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << *k;
	k->setGrade(2);
	try
	{
		k->gradeIncrement();
		k->gradeIncrement();
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	k->setGrade(42);
	try
	{
		admission->beSigned(*k);
		k->signForm(*admission);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	Bureaucrat *best = new Bureaucrat("best", 1);
	Form *president = new PresidentialPardonForm("president");
	Form *tree = new ShrubberyCreationForm("home");
	Form *robot = new RobotomyRequestForm("robot");

	best->signForm(*tree);
	tree->execute(*best);
	best->signForm(*president);
	president->execute(*best);
	best->signForm(*robot);
	robot->execute(*best);

	delete admission;
	delete robot;
	delete president;
	delete k;
	delete best;
	delete tree;
}