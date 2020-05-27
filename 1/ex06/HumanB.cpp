/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 12:43:03 by alromero          #+#    #+#             */
/*   Updated: 2020/05/27 14:57:56 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack()
{
	std::cout << this->name << " attacks with his "
	<< this->weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name):
weapon(NULL)
{
	this->name = name;
}

void	HumanB::setWeapon(const Weapon &weapon)
{
	this->weapon = &weapon;
}

void		HumanB::setName(std::string name)
{
	this->name = name;
}

std::string	HumanB::getName(void)
{
	return (this->name);
}
