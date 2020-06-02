/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 12:32:38 by alromero          #+#    #+#             */
/*   Updated: 2020/05/29 14:30:20 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedPoint = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed &copy )
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPoint = copy.getRawBits();
}

Fixed&	Fixed::operator=(Fixed const &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixedPoint = copy.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	return (this->fixedPoint);
}

void Fixed::setRawBits( int const raw )
{
	this->fixedPoint = raw;
}

Fixed::Fixed(const int p)
{
	int a;

	std::cout << "Int constructor called" << std::endl;
	a = p << this->nBits;
	this->fixedPoint = a;
}

Fixed::Fixed(const float p)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPoint = roundf(p * 256);
}

float Fixed::toFloat( void ) const
{
	return ((float)this->fixedPoint / (float)(256));
}

int Fixed::toInt( void ) const
{
	return (this->fixedPoint >> this->nBits);
}

std::ostream&	operator<<(std::ostream &out, Fixed const &copy)
{
    out << copy.toFloat();
    return (out);
}
