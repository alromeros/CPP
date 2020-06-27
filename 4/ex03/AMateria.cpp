/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 13:54:59 by alromero          #+#    #+#             */
/*   Updated: 2020/06/26 14:05:03 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
:					_xp(0), type(type)
{

}

AMateria::AMateria()
:			_xp(0), type("untyped")
{

}

AMateria::AMateria( const AMateria& other )
:					_xp(other._xp), type(other.type)
{

}

AMateria& AMateria::operator=( const AMateria& other )
{
	(void)other;
	return (*this);
}

AMateria::~AMateria()
{

}

std::string const & AMateria::getType() const
{
	return (this->type);
}

unsigned int AMateria::getXP() const
{
	return (this->_xp);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}

void	AMateria::setXP(int xp)
{
	this->_xp = xp;
}

void	AMateria::setType( std::string const type )
{
	this->type = type;
}