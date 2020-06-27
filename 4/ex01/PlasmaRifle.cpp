/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 13:10:37 by alromero          #+#    #+#             */
/*   Updated: 2020/06/08 17:33:09 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

void PlasmaRifle::attack() const
{
	std::cout << " * piouuu piouuu piouuu " << std::endl;
}

PlasmaRifle::PlasmaRifle()
:			AWeapon( "Plasma Rifle", 5, 21)
{

}

PlasmaRifle::PlasmaRifle( PlasmaRifle const &other )
:						AWeapon(other.getName(), other.getAPCost(), other.getDamage())
{

}

PlasmaRifle::~PlasmaRifle()
{

}

PlasmaRifle& PlasmaRifle::operator=( const PlasmaRifle& other )
{
	this->setName(other.getName());
	this->setDamage(other.getDamage());
	this->setAPCost(other.getAPCost());

	return (*this);
}
