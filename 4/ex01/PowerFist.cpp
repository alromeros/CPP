/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 13:18:38 by alromero          #+#    #+#             */
/*   Updated: 2020/06/08 17:32:47 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

void PowerFist::attack() const 
{
	std::cout << " * pschhh... SBAM! " << std::endl;
}

PowerFist::PowerFist()
:			AWeapon( "Power Fist", 8, 50)
{

}

PowerFist::PowerFist( PowerFist const &other )
:						AWeapon(other.getName(), other.getAPCost(), other.getDamage())
{

}

PowerFist::~PowerFist()
{

}

PowerFist& PowerFist::operator=( const PowerFist& other )
{
	this->setName(other.getName());
	this->setDamage(other.getDamage());
	this->setAPCost(other.getAPCost());

	return (*this);
}
