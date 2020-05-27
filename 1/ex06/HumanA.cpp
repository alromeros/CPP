/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 12:39:20 by alromero          #+#    #+#             */
/*   Updated: 2020/05/27 14:58:24 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack() const
{
	std::cout << this->name << " attacks with his "
	<< this->weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string &name, const Weapon &weapon):
weapon(weapon)
{
	this->name = name;
}

void		HumanA::setName(std::string name)
{
	this->name = name;
}

std::string	HumanA::getName(void)
{
	return (this->name);
}
