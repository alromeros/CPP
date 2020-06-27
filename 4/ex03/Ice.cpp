/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 20:12:54 by alromero          #+#    #+#             */
/*   Updated: 2020/06/26 16:01:37 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
:		AMateria("ice")
{

}

Ice::Ice( const Ice& other )
:		AMateria(other.getType())
{
	this->setXP(other.getXP());
}

Ice& Ice::operator=( const Ice& other )
{
	this->setXP(other.getXP());
	return (*this);
}

Ice::~Ice()
{

}

AMateria* Ice::clone() const
{
	AMateria *copy = new Ice(*this);
	return (copy);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() <<  " *" << std::endl;
	this->setXP(getXP() + 10);
}
