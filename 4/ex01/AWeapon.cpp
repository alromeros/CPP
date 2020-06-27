/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 12:54:50 by alromero          #+#    #+#             */
/*   Updated: 2020/06/08 13:06:51 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
:					name(name), aPCost(apcost), damage(damage)
{

}

AWeapon::AWeapon()
{

}

AWeapon::AWeapon( const AWeapon &other )
:	name(other.name), aPCost(other.aPCost), damage(other.damage)
{

}

AWeapon& AWeapon::operator=(const AWeapon &other )
{
	this->damage = other.damage;
	this->aPCost = other.aPCost;
	this->damage = other.damage;
	return (*this);
}

AWeapon::~AWeapon()
{

}

std::string AWeapon::getName() const
{
	return (this->name);
}

int 		AWeapon::getAPCost() const
{
	return (this->aPCost);
}

int 		AWeapon::getDamage() const
{
	return (this->damage);
}

void		AWeapon::setDamage( int damage )
{
	this->damage = damage;
}

void		AWeapon::setAPCost( int apcost )
{
	this->aPCost = apcost;
}

void		AWeapon::setName( std::string name )
{
	this->name = name;
}