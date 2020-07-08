/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 11:55:12 by alromero          #+#    #+#             */
/*   Updated: 2020/07/08 13:48:31 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
:		Form("RobotomyRequestForm", 72, 45), target("unnamed")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string const target)
:		Form("RobotomyRequestForm", 72, 45), target(target)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
:			Form(other.getName(), other.getGradeSign(), other.getGradeExe()), target(other.target)
{
	if (other.getSign())
		this->setSign(1);
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (other.getSign())
		this->setSign(1);
	return (*this);
}

void		RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	this->Form::execute(executor);
	srand(time(NULL));
	std::cout << "BZZZZZZZZZZZZZZZZZZZ... * UNBEARABLE FEEDBACK NOISE *!!!" << std::endl;
	if ((rand() % 2))
		std::cout << this->target << " has been robotomized!!" << std::endl;
	else
		std::cout << "Error in " << this->target << " robotization!!" << std::endl;
}

Form*	RobotomyRequestForm::clone()
{
	Form *nuevo = new RobotomyRequestForm(*this);
	return (nuevo);
}
