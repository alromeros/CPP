/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 18:34:17 by alromero          #+#    #+#             */
/*   Updated: 2020/07/08 19:13:02 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::SameBureaucrats::SameBureaucrats()
{
	this->error_message = "The signing and executing bureaucrats are the same!";
}

OfficeBlock::SameBureaucrats::SameBureaucrats( const SameBureaucrats &other )
{
	this->error_message = other.error_message;
}

OfficeBlock::SameBureaucrats::~SameBureaucrats()
{

}

OfficeBlock::SameBureaucrats& OfficeBlock::SameBureaucrats::operator=( const SameBureaucrats &other )
{
	this->error_message = other.error_message;
	return (*this);
}

const char* OfficeBlock::SameBureaucrats::what() const throw ()
{
	return error_message.c_str();
}

OfficeBlock::NullBureaucrat::NullBureaucrat()
{
	this->error_message = "At least one bureaucrat is not present!";
}

OfficeBlock::NullBureaucrat::NullBureaucrat( const NullBureaucrat &other )
{
	this->error_message = other.error_message;
}

OfficeBlock::NullBureaucrat::~NullBureaucrat()
{

}

OfficeBlock::NullBureaucrat& OfficeBlock::NullBureaucrat::operator=( const NullBureaucrat &other )
{
	this->error_message = other.error_message;
	return (*this);
}

const char* OfficeBlock::NullBureaucrat::what() const throw ()
{
	return error_message.c_str();
}

OfficeBlock::NullIntern::NullIntern()
{
	this->error_message = "The intern is not present!";
}

OfficeBlock::NullIntern::NullIntern( const NullIntern &other )
{
	this->error_message = other.error_message;
}

OfficeBlock::NullIntern::~NullIntern()
{

}

OfficeBlock::NullIntern& OfficeBlock::NullIntern::operator=( const NullIntern &other )
{
	this->error_message = other.error_message;
	return (*this);
}

const char* OfficeBlock::NullIntern::what() const throw ()
{
	return error_message.c_str();
}



OfficeBlock::OfficeBlock(Intern *yo, Bureaucrat *superiorSign, Bureaucrat *superiorExe)
:						yo(yo), superiorSign(superiorSign), superiorExe(superiorExe)
{
	if (!yo)
		throw OfficeBlock::NullIntern();
	if (!superiorSign || !superiorExe)
		throw OfficeBlock::NullBureaucrat();
	if (superiorSign == superiorExe)
		throw OfficeBlock::SameBureaucrats();
}

OfficeBlock::OfficeBlock()
:				yo(NULL), superiorSign(NULL), superiorExe(NULL)
{

}

OfficeBlock::~OfficeBlock()
{

}

void		OfficeBlock::setYo(Intern *yo)
{
	if (!yo)
		throw OfficeBlock::NullIntern();
	this->yo = yo;
}

void		OfficeBlock::setSuperiorSign(Bureaucrat *superior)
{
	if (!superior)
		throw OfficeBlock::NullBureaucrat();
	this->superiorSign = superior;
}

void		OfficeBlock::setSuperiorExe(Bureaucrat *superior)
{
	if (!superior)
		throw OfficeBlock::NullBureaucrat();
	this->superiorExe = superior;
}

Intern		*OfficeBlock::getYo() const
{
	return (this->yo);
}

Bureaucrat	*OfficeBlock::getSuperiorSign() const
{
	return (this->superiorSign);
}
Bureaucrat	*OfficeBlock::getSuperiorExe() const
{
	return (this->superiorExe);
}

void		OfficeBlock::doBureaucracy(std::string type, std::string target)
{
	if (!yo)
		throw OfficeBlock::NullIntern();
	if (!superiorSign || !superiorExe)
		throw OfficeBlock::NullBureaucrat();
	if (superiorSign == superiorExe)
		throw OfficeBlock::SameBureaucrats();
	Form *elPapel;
	elPapel = this->yo->makeForm(type, target);

	this->superiorSign->signForm((*elPapel));
	this->superiorExe->executeForm(*elPapel);
	delete elPapel;
}
