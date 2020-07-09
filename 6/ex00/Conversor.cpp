/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversor.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 21:59:22 by alromero          #+#    #+#             */
/*   Updated: 2020/06/23 21:59:22 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversor.hpp"

Conversor::Conversor()
{
	
}

Conversor::Conversor( std::string const literal )
:					literal(literal), litInt(0), litDouble(0.0), litFloat(0.0f), litChar('0')
{

}

Conversor::~Conversor()
{

}

Conversor::Conversor( Conversor const &other )
:					literal(other.literal), litInt(other.litInt), litDouble(other.litDouble), litFloat(other.litFloat),
					litChar(other.litChar), signal(other.signal)
{

}

Conversor& Conversor::operator=( Conversor const &other )
{
		(std::string)this->literal = (std::string)other.literal;
		this->litInt = other.litInt;
		this->litDouble = other.litDouble;
		this->litFloat = other.litFloat;
		this->litChar = other.litChar;
		this->signal = other.signal;
		return (*this);
}

void		Conversor::strParser()
{
	this->signal = this->errorHandler();
	if (signal == INT)
		this->intPrint();
	else if (signal == CHAR)
		this->charPrint();
	else if (signal == FLOAT)
		this->floatPrint();
	else if (signal == DOUBLE)
		this->doublePrint();
	else if (signal == PSEUDO)
		this->pseudoPrint();
	else if (signal == ERROR1)
		throw (ERROR1);
	else if (signal == ERROR2)
		throw (ERROR2);
	else if (signal == ERROR3)
		throw (ERROR3);
}

void		Conversor::floatPrint()
{
	this->litFloat = static_cast<float>(atof(this->literal.c_str()));
	this->litInt = static_cast<int>(this->litFloat);
	this->litDouble = static_cast<double>(this->litFloat);
	this->litChar = static_cast<char>(this->litInt);
	// printing a float as a character
	if (std::isprint(this->litChar) && !(atoi(this->literal.c_str()) >> 8 & 0xFF))
		std::cout << "char: '" << this->litChar << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	// ... as an int
	std::cout << "int: " << this->litInt << std::endl;
	// ... as a float
	if ((this->litFloat - this->litInt) == 0)
		std::cout << "float: " << this->litFloat << ".0f" << std::endl;
	else
		std::cout << "float: " << this->litFloat << "f" << std::endl;
	// ... as a double
	if ((this->litDouble - this->litInt) == 0)
		std::cout << "double: " << this->litDouble << ".0" << std::endl;
	else
		std::cout << "double: " << this->litDouble << std::endl;
}

void		Conversor::doublePrint()
{
	this->litDouble = atof(this->literal.c_str());
	this->litFloat =  static_cast<float>(this->litDouble);
	this->litInt = static_cast<int>(this->litFloat);
	this->litChar = static_cast<char>(this->litInt);
	// printing a double as a character
	if (std::isprint(this->litChar) && !(atoi(this->literal.c_str()) >> 8 & 0xFF))
		std::cout << "char: '" << this->litChar << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	// ... as an int
	std::cout << "int: " << this->litInt << std::endl;
	// ... as a float
	if ((this->litFloat - this->litInt) == 0)
		std::cout << "float: " << this->litFloat << ".0f" << std::endl;
	else
		std::cout << "float: " << this->litFloat << "f" << std::endl;
	// ... as a double
	if ((this->litDouble - this->litInt) == 0)
		std::cout << "double: " << this->litDouble << ".0" << std::endl;
	else
		std::cout << "double: " << this->litDouble << std::endl;
}

void		Conversor::charPrint()
{
	this->litChar = this->literal[0];
	this->litInt = static_cast<int>(this->litChar);
	this->litDouble = static_cast<double>(this->litInt);
	this->litFloat = static_cast<float>(this->litDouble);
	// printing char as a character
	if (std::isprint(this->litChar))
		std::cout << "char: '" << this->litChar << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	// ... as an int
	std::cout << "int: " << this->litInt << std::endl;
	// ... as a float
	std::cout << "float: " << this->litFloat << ".0f" << std::endl;
	// ... as a double
	std::cout << "double: " << this->litDouble << ".0" << std::endl;
}

void		Conversor::intPrint()
{
	this->litChar = static_cast<char>(atoi(this->literal.c_str()));
	this->litDouble = static_cast<double>(atoi(this->literal.c_str()));
	this->litFloat = static_cast<float>(atoi(this->literal.c_str()));
	this->litInt = atoi(this->literal.c_str());
	// printing an int as a character
	if (std::isprint(this->litChar) && !(atoi(this->literal.c_str()) >> 8 & 0xFF))
		std::cout << "char: '" << this->litChar << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	// ... as an int
	std::cout << "int: " << this->litInt << std::endl;
	// ... as a float
	std::cout << "float: " << this->litFloat << ".0f" << std::endl;
	// ... as a double
	std::cout << "double: " << this->litDouble << ".0" << std::endl;
}

void		Conversor::pseudoPrint()
{
	int flag = this->pseudoLitCheck();

	// ... as a char
	std::cout << "char: impossible" << std::endl;
	// ... as an int
	std::cout << "int: impossible" << std::endl;
	if (flag == 1 || flag == 4)
	{
		this->litInt = static_cast<int>(INFINITY * -1);
		this->litChar = static_cast<char>(INFINITY * -1);
		this->litDouble = static_cast<double>(INFINITY * -1);
		this->litFloat = static_cast<float>(INFINITY * -1);
		// ... as a float
		std::cout << "float: -inff" << "f" << std::endl;
		// ... as a double
		std::cout << "double: -inf" << std::endl;
	}
	else if (flag == 2 || flag == 5)
	{
		this->litInt = static_cast<int>(INFINITY);
		this->litChar = static_cast<char>(INFINITY);
		this->litDouble = static_cast<double>(INFINITY);
		this->litFloat = static_cast<float>(INFINITY);
		// ... as a float
		std::cout << "float: " << this->litFloat << "f" << std::endl;
		// ... as a double
		std::cout << "double: " << this->litDouble << std::endl;
	}
	else if (flag == 6 || flag == 3)
	{
		this->litInt = static_cast<int>(NAN);
		this->litChar = static_cast<char>(NAN);
		this->litDouble = static_cast<double>(NAN);
		this->litFloat = static_cast<float>(NAN);
		// ... as a float
		std::cout << "float: " << this->litFloat << "f" << std::endl;
		// ... as a double
		std::cout << "double: " << this->litDouble << std::endl;
	}
}

int			Conversor::pseudoLitCheck() const
{
	if (!(this->literal.compare("-inff")))
		return (1);
	else if (!(this->literal.compare("+inff")))
		return(2);
	else if (!(this->literal.compare("nanf")))
		return (3);
	else if (!(this->literal.compare("-inf")))
		return (4);
	else if (!(this->literal.compare("+inf")))
		return (5);
	else if (!(this->literal.compare("nan")))
		return (6);
	else
		return (0);
}

int			Conversor::errorHandler() const
{
	int flag = 0;

	if (this->pseudoLitCheck())
		return (PSEUDO);
	if (this->literal.length() == 1 && std::isprint(this->literal[0]) && !std::isdigit(this->literal[0]))
		return (CHAR);
	for (int i = 0; i < (int)this->literal.length(); i++)
	{
		if (this->literal[i] == '+' || this->literal[i] == '-')
		{
			if (i != 0)
				return (ERROR1);
		}
		else if (this->literal[i] == '.')
		{
			flag++;
			if (flag > 1 || i == 0 || i == (int)(literal.length() - 1))
				return (ERROR2);
		}
		else if (!(std::isdigit(this->literal[i])) && !(this->literal[i] == 'f' && i == ((int)(this->literal.length() - 1))))
			return (ERROR3);
	}
	if (this->literal[this->literal.length() - 1] == 'f')
		return (FLOAT);
	else if (flag)
		return (DOUBLE);
	else
		return (INT);
}

void		Conversor::setLiteral(std::string const literal)
{
	(std::string)this->literal = (std::string)literal;
}

void		Conversor::setLitInt(int n)
{
	this->litInt = n;
}

void		Conversor::setLitDouble(double n)
{
	this->litDouble = n;	
}

void		Conversor::setLitFloat(float n)
{
	this->litFloat = n;
}

void		Conversor::setLitChar(char c)
{
	this->litChar = c;
}

void		Conversor::setSignal(int signal)
{
	this->signal = signal;
}

int			Conversor::getLitInt() const
{
	return (this->litInt);
}

std::string	Conversor::getLiteral() const
{
	return (this->literal);
}

double		Conversor::getLitDouble() const
{
	return (this->litDouble);
}

float		Conversor::getLitFloat() const
{
	return (this->litFloat);
}

char		Conversor::getLitChar() const
{
	return (this->litChar);
}

int			Conversor::getSignal() const
{
	return (this->signal);
}
