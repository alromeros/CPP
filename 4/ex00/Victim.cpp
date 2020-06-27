/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 16:10:53 by alromero          #+#    #+#             */
/*   Updated: 2020/06/06 19:35:07 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim():
name("Unnamed")
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim( const Victim& other ):
name(other.name)
{
	this->name = other.name;
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim( std::string const name ):
name(name)
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
		std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl;
}

Victim& Victim::operator=( const Victim& other)
{
	this->name = other.name;
	return (*this);
}

void Victim::setName( std::string const name )
{
	this->name = name;
}

std::string Victim::getName(void) const
{
	return (this->name);
}

std::ostream& operator<<(std::ostream& out, const Victim& other)
{
	out << "I'm " << other.getName() << " and I like otters!" << std::endl;
	return (out);
}

void Victim::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}
