/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:31:32 by alromero          #+#    #+#             */
/*   Updated: 2020/07/08 11:32:22 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
:			name("Unnamed"), grade(150)
{

}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	this->error_message = "Grade too high!";
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	this->error_message = "Grade too low!";
}

Bureaucrat::GradeTooHighException::GradeTooHighException( const GradeTooHighException &other )
{
	this->error_message = other.error_message;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException()
{

}

Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator=( const GradeTooHighException &other )
{
	this->error_message = other.error_message;
	return (*this);
}

Bureaucrat::GradeTooLowException::GradeTooLowException( const GradeTooLowException &other )
{
	this->error_message = other.error_message;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException()
{

}

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=( const GradeTooLowException &other )
{
	this->error_message = other.error_message;
	return (*this);
}

const char* Bureaucrat::GradeTooLowException::what() const throw () 
{
	return error_message.c_str();
}

const char* Bureaucrat::GradeTooHighException::what() const throw ()
{
	return error_message.c_str();
}

Bureaucrat::Bureaucrat(std::string name, int grade)
:						name(name), grade(grade)
{
	if (this->grade < 1)
	{
		throw(Bureaucrat::GradeTooHighException());
	}
	else if (this->grade > 150)
	{
		throw(Bureaucrat::GradeTooLowException());
	}
}

Bureaucrat::Bureaucrat( Bureaucrat const &other )
:						name(other.getName()), grade(getGrade())
{
	if (this->grade < 1)
	{
		throw(Bureaucrat::GradeTooHighException());
	}
	else if (this->grade > 150)
	{
		throw(Bureaucrat::GradeTooLowException());
	}
}

void				Bureaucrat::signForm( Form& paper )
{
	if (paper.getSign())
	{
		std::cout << paper.getName() << " is already signed!" << std::endl;
		return ;
	}
	if (paper.getGradeSign() >= this->grade)
	{
		paper.setSign(true);
		std::cout << this->name << " just signed " << paper.getName() << std::endl;
		return ;
	}
	else
		std::cout << this->getName() << " couldn't sing " << paper.getName() << " because: ";
	throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat& Bureaucrat::operator=( Bureaucrat const &other )
{
	this->grade = other.grade;
	(std::string)this->name = other.name;
	return (*this);
}

std::ostream& operator<<(std::ostream &out, Bureaucrat const &other )
{
	out << other.getName() << ", bureaucrat grade " << other.getGrade() << std::endl;
	return (out);
}

Bureaucrat::~Bureaucrat()
{

}

std::string			Bureaucrat::getName(void)	const
{
	return (this->name);
}

int					Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void				Bureaucrat::setName(std::string const name)
{
	(std::string)this->name = name;
}

void				Bureaucrat::setGrade(int grade)
{
	this->grade = grade;
	if (this->grade < 1)
	{
		throw(Bureaucrat::GradeTooHighException());
	}
	else if (this->grade > 150)
	{
		throw(Bureaucrat::GradeTooLowException());
	}
}

void				Bureaucrat::gradeDecrement(void)
{
	this->grade++;
	if (grade > 150)
	{
		throw(Bureaucrat::GradeTooLowException());
	}
}

void				Bureaucrat::gradeIncrement(void)
{
	this->grade--;
	if (grade < 1)
	{
		throw(Bureaucrat::GradeTooHighException());
	}
}
