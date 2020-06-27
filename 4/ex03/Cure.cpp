/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 11:59:53 by alromero          #+#    #+#             */
/*   Updated: 2020/06/26 17:33:18 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
:		AMateria("cure")
{

}

Cure::Cure( const Cure& other )
:		AMateria(other.getType())
{
	this->setXP(other.getXP());
}

Cure& Cure::operator=( const Cure& other )
{
	this->setXP(other.getXP());
	return (*this);
}

Cure::~Cure()
{

}

AMateria* Cure::clone() const
{
	AMateria *copy = new Cure(*this);
	return (copy);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() <<  "'s wounds *" << std::endl;
	this->setXP(getXP() + 10);
}
