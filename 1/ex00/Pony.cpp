/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 14:32:40 by alromero          #+#    #+#             */
/*   Updated: 2020/05/19 13:46:52 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony()
{
	std::cout << "* LOUD AND UNBEARABLE PONY NOISES *" << std::endl;
}

Pony::~Pony()
{
	std::cout << this->ponyName << " ran away :(" << std::endl; 
}

void		Pony::setTailLenght(int lenght)
{
	this->tailLenght = lenght;
}

void		Pony::setColour(std::string rgb)
{
	this->colour = rgb; 
}

void		Pony::setHealthLevel(int health)
{
	this->healthLevel = health;
}

void		Pony::setPonyName(std::string name)
{
	this->ponyName = name;
}

int			Pony::getTailLenght(void)
{
	return (this->tailLenght);
}

std::string	Pony::getColour(void)
{
	return (this->colour);
}

int			Pony::getHealthLevel(void)
{
	return (this->healthLevel);
}

std::string	Pony::getPonyName(void)
{
	return (this->ponyName);
}
