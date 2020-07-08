/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 12:08:36 by alromero          #+#    #+#             */
/*   Updated: 2020/07/08 20:07:17 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

std::string const Intern::keywords[6] =
{
	"shrubbery creation",
	"shrubbery creation form",
	"robotomy request",
	"robotomy request_form",
	"presidential pardon",
	"presidential pardon form"
};

Intern::Intern()
{

}

Intern::Intern( Intern const &other )
{
	(void)other;
}

Intern& Intern::operator=( Intern const &other )
{
	(void)other;
	return (*this);
}

Intern::~Intern()
{

}

Form*					Intern::returnForm(int index, std::string target)
{
	this->types[0] = new ShrubberyCreationForm(target);
	this->types[1] = new ShrubberyCreationForm(target);
	this->types[2] = new RobotomyRequestForm(target);
	this->types[3] = new RobotomyRequestForm(target);
	this->types[4] = new PresidentialPardonForm(target);
	this->types[5] = new PresidentialPardonForm(target); 

	Form *nuevo = this->types[index]->clone();
	std::cout << "Intern creates " << nuevo->getName() << std::endl; 	
	for (int i = 0; i < 6; i++)
			delete (this->types[i]);
	return (nuevo);
}

Form*	Intern::makeForm(std::string type, std::string name)
{
	std::string temp = type;

	for (size_t i = 0; i < temp.length(); i++)
		temp[i] = std::tolower(type[i]);
	for (int i = 0; i < 6; i++)
		if (temp == keywords[i])
			return (returnForm(i, name));
	try
	{
		throw (type);
	}
	catch (std::string type)
	{
		std::cout << " \" " << type << " \" is not accepted as a form type!" << std::endl;
	}
	Form *vacio = new Form;
	return (vacio);
}
