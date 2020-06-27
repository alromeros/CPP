/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 14:26:02 by alromero          #+#    #+#             */
/*   Updated: 2020/06/08 17:15:26 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
:			Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant( const SuperMutant& other )
:			Enemy(other.getHp(), other.getType())
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant& SuperMutant::operator=( const SuperMutant& other )
{
	this->setHp(other.getHp());
	this->setType(other.getType());

	return (*this);
}

void	SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	if (damage >= 0)
		this->setHp(this->getHp() - damage);
	if (this->getHp() < 0)
		this->setHp(0);
}