/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 12:32:38 by alromero          #+#    #+#             */
/*   Updated: 2020/05/31 15:15:13 by alromero         ###   ########.fr       */
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

bool	Fixed::operator>(	const Fixed &f )
{
	if (this->getRawBits() > f.getRawBits())
		return (true);
	else 
		return (false);
}

bool	Fixed::operator<(	const Fixed &f )
{
	if (this->getRawBits() < f.getRawBits())
		return (true);
	else 
		return (false);
}

bool	Fixed::operator>=(	const Fixed &f )
{
	if (this->getRawBits() >= f.getRawBits())
		return (true);
	else 
		return (false);
}

bool	Fixed::operator<=(	const Fixed &f )
{
	if (this->getRawBits() <= f.getRawBits())
		return (true);
	else 
		return (false);
}

bool	Fixed::operator==(	const Fixed &f )
{
	if (this->getRawBits() == f.getRawBits())
		return (true);
	else 
		return (false);
}

bool	Fixed::operator!=(	const Fixed &f)
{
	if (this->getRawBits() != f.getRawBits())
		return (true);
	else 
		return (false);
}

Fixed	Fixed::operator +(const Fixed &f)
{
	Fixed other;

	other.setRawBits(this->fixedPoint + f.getRawBits());
	return (other);
}

Fixed	Fixed::operator -(const Fixed &f)
{
	Fixed other;

	other.setRawBits(this->getRawBits() - f.getRawBits());
	return (other);
}

Fixed	Fixed::operator *(const Fixed &f)
{
	Fixed other;

	other.setRawBits(this->getRawBits() * f.getRawBits() / 256);
	return (other);
}

Fixed	Fixed::operator /(const Fixed &f)
{
	Fixed other;

	other.setRawBits(this->fixedPoint / f.getRawBits() / 256);
	return (other);
}

Fixed	Fixed::operator ++( int )
{
	Fixed cpy( *this );

	this->fixedPoint++;
	return (cpy);
}

Fixed	Fixed::operator ++( )
{
	this->fixedPoint++;
	return (*this);
}

Fixed	Fixed::operator --( int )
{
	Fixed copy( *this );

	this->fixedPoint--;
	return (copy);
}

Fixed	Fixed::operator --( )
{
	this->fixedPoint--;
	return (*this);
}

Fixed&			min( Fixed& a, Fixed& b )
{
	if (a > b)
		return b;
	else
		return (a);
}

Fixed&			Fixed::min( Fixed& a, Fixed& b )
{
	if (a > b)
		return b;
	else
		return (a);
}


const Fixed&	min( const Fixed& a, const Fixed& b )
{
	if ((Fixed)a > (Fixed)b)
		return b;
	else
		return (a);
}

const Fixed&	Fixed::min( const Fixed& a, const Fixed& b )
{
	if ((Fixed)a > (Fixed)b)
		return b;
	else
		return (a);
}

Fixed&			max( Fixed& a, Fixed& b )
{
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed&			Fixed::max( Fixed& a, Fixed& b )
{
	if (a > b)
		return (a);
	else
		return (b);
}

const Fixed&	max( const Fixed& a, const Fixed& b )
{
	if ((Fixed)a < (Fixed)b)
		return b;
	else
		return (a);
}

const Fixed&	Fixed::max( const Fixed& a, const Fixed& b )
{
	if ((Fixed)a < (Fixed)b)
		return b;
	else
		return (a);
}
