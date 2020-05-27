/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 18:00:31 by alromero          #+#    #+#             */
/*   Updated: 2020/05/21 13:40:07 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << "[" << this->name << "] of type [" << this->type << "] said: Braiiiiiiinnnssss..." << std::endl;
}

void		Zombie::setType(std::string type)
{
	this->type = type;
}

void 		Zombie::setName(std::string name)
{
	this->name = name;
}

std::string Zombie::getType(void)
{
	return (this->type);
}

std::string Zombie::getName(void)
{
	return (this->name);
}

Zombie::Zombie(std::string type, std::string name)
{
	this->type = type;
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << this->name << " died :(" << std::endl;
}

Zombie::Zombie()
{
	this->type = "Normal";
}
