/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 16:47:33 by alromero          #+#    #+#             */
/*   Updated: 2020/06/28 00:40:19 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon()
{
	std::cout << "Zong zog." << std::endl;
}

Peon::Peon(std::string const name)
: Victim(name)
{
	std::cout << "Zong zog." << std::endl;
}

Peon::Peon(const Peon& other)
: Victim(other)
{
	std::cout << "Zong zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon& Peon::operator=(const Peon& other)
{
	this->Victim::setName(other.Victim::getName());
	return (*this);
}

void Peon::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}
