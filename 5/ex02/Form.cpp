/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 21:29:21 by alromero          #+#    #+#             */
/*   Updated: 2020/07/08 20:06:34 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::GradeTooHighException::GradeTooHighException()
{
	this->error_message = "Grade too high!";
}

Form::GradeTooLowException::GradeTooLowException()
{
	this->error_message = "Grade too low!";
}

Form::GradeTooHighException::GradeTooHighException( const GradeTooHighException &other )
{
	this->error_message = other.error_message;
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{

}

Form::GradeTooHighException& Form::GradeTooHighException::operator=( const GradeTooHighException &other )
{
	this->error_message = other.error_message;
	return (*this);
}

Form::GradeTooLowException::GradeTooLowException( const GradeTooLowException &other )
{
	this->error_message = other.error_message;
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{

}

Form::GradeTooLowException& Form::GradeTooLowException::operator=( const GradeTooLowException &other )
{
	this->error_message = other.error_message;
	return (*this);
}

Form::FormNotSigned::FormNotSigned()
{
	this->error_message = "Form is not signed!";
}

Form::FormNotSigned::FormNotSigned( const FormNotSigned &other )
{
	this->error_message = other.error_message;
}

Form::FormNotSigned::~FormNotSigned() throw ()
{

}

Form::FormNotSigned& Form::FormNotSigned::operator=( const FormNotSigned &other )
{
	this->error_message = other.error_message;
	return (*this);
}

const char* Form::FormNotSigned::what() const throw () 
{
	return error_message.c_str();
}

const char* Form::GradeTooHighException::what() const throw ()
{
	return error_message.c_str();
}

const char* Form::GradeTooLowException::what() const throw ()
{
	return error_message.c_str();
}

Form::Form()
:		name("regular form"), sign(false), gradeSign(150), gradeExe(150)
{
	if (this->gradeSign < 1 || this->gradeExe < 1)
	{
		throw(Form::GradeTooHighException());
	}
	else if (this->gradeSign > 150 || this->gradeExe > 150)
	{
		throw(Form::GradeTooLowException());
	}
}

Form::Form( std::string const name, int sign, int exe )
:			name(name), sign(false), gradeSign(sign), gradeExe(exe)
{
	if (this->gradeSign < 1 || this->gradeExe < 1)
	{
		throw(Form::GradeTooHighException());
	}
	else if (this->gradeSign > 150 || this->gradeExe > 150)
	{
		throw(Form::GradeTooLowException());
	}
}

Form::~Form()
{

}

Form::Form( Form const &other )
:			name(other.getName()), sign(other.getSign()),
			gradeSign(other.getGradeSign()), gradeExe(other.getGradeExe())
{
	if (this->gradeSign < 1 || this->gradeExe < 1)
	{
		throw(Form::GradeTooHighException());
	}
	else if (this->gradeSign > 150 || this->gradeExe > 150)
	{
		throw(Form::GradeTooLowException());
	}
}

Form&	Form::operator=( Form const &other )
{
	(std::string)this->name = other.getName();
	this->sign = other.getSign();
	
	return (*this);
}

void				Form::execute(Bureaucrat const & executor) const
{
	if ((executor.getGrade() > this->getGradeExe()))
		throw (Form::GradeTooLowException());
	if (!this->getSign())
		throw (Form::FormNotSigned());
}

void				Form::beSigned(Bureaucrat& k)
{
	if (this->sign)
	{
		std::cout << this->name << " is already signed!" << std::endl;
		return ;
	}
	if (this->gradeSign >= k.getGrade())
	{
		this->setSign(true);
		std::cout << k.getName() << " just signed " << this->name << std::endl;
		return ;
	}
	else
		std::cout << k.getName() << " couldn't sing " << this->name << " because: ";
	throw (Form::GradeTooLowException());
}

void				Form::setName(std::string const name)
{
	(std::string)(this->name) = (std::string)name;
}

void				Form::setSign(bool sign)
{
	this->sign = sign;
}

std::string			Form::getName() const
{
	return (this->name);
}

bool				Form::getSign() const
{
	return (this->sign);
}

int					Form::getGradeSign() const
{
	return (this->gradeSign);
}

int					Form::getGradeExe() const
{
	return (this->gradeExe);
}

std::ostream&	operator<<(std::ostream& out, Form const &other)
{
	out << "Form with name " << other.getName() << ", with a sign grade of " << other.getGradeSign() << " and a executable grade of " << other.getGradeExe() <<
	"is currently ";
	if (other.getSign())
		out << "signed" << std::endl;
	else
		out << "unsigned" << std::endl;
	return (out);
}
