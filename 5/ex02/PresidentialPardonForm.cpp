/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 11:55:32 by alromero          #+#    #+#             */
/*   Updated: 2020/07/08 13:04:50 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
:		Form("PresidentialPardonForm", 25, 5), target("unnamed")
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string const target)
:		Form("PresidentialPardonForm", 25, 5), target(target)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
:			Form(other.getName(), other.getGradeSign(), other.getGradeExe()), target(other.target)
{
	if (other.getSign())
		this->setSign(1);
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (other.getSign())
		this->setSign(1);
	return (*this);
}

void		PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	this->Form::execute(executor);
	std::cout << this->target << " has been pardonen by our lord and savior Zafod Beeblebrox!!" << std::endl;
}
