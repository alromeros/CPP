/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 14:56:54 by alromero          #+#    #+#             */
/*   Updated: 2020/06/06 19:25:10 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer():
name("Unnamed"), title("The Untitled")
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer( const Sorcerer& other ):
name(other.name), title(other.title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer( const std::string name, const std::string title ):
name(name), title(title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer& Sorcerer::operator=( const Sorcerer& other)
{
	this->name = other.name;
	this->title = other.title;
	return (*this);
}

void Sorcerer::setName( std::string const name )
{
	this->name = name;
}

std::string Sorcerer::getName(void) const
{
	return (this->name);
}

void Sorcerer::setTitle( std::string const title )
{
	this->title = title;
}

std::string Sorcerer::getTitle(void) const
{
	return (this->title);
}

std::ostream& operator<<(std::ostream& out, const Sorcerer& other)
{
	out << "I am " << other.getName() << ", " << other.getTitle() << ", and I like ponies!" << std::endl;
	return (out);
}

void Sorcerer::polymorph(Victim const &victima) const
{
	victima.getPolymorphed();
}
