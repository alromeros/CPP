/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 16:23:04 by alromero          #+#    #+#             */
/*   Updated: 2020/06/11 13:46:39 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->level = 1;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
	std::cout << this->name << " was renamed \"";
	this->name = "Unnamed SC4V-TP";
	std::cout << this->name << "\" after being converted to a SC4V-TP"  << std::endl;
	srand((unsigned int)time(0));
}

ScavTrap::ScavTrap(std::string const &str)
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->level = 1;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
	std::cout << this->name << " was renamed \"";
	this->name = str;
	if (!str.length())
		this->name = "Unnamed SC4V-TP";
	std::cout << this->name << "\" after being converted to a SC4V-TP"  << std::endl;
	srand((unsigned int)time(0));
}

ScavTrap::ScavTrap( const ScavTrap &copy )
{
	this->hitPoints = copy.hitPoints;
	this->maxHitPoints = copy.maxHitPoints;
	this->energyPoints = copy.energyPoints;
	this->maxEnergyPoints = copy.maxEnergyPoints;
	this->level = copy.level;
	this->meleeAttackDamage = copy.meleeAttackDamage;
	this->rangedAttackDamage = copy.rangedAttackDamage;
	this->armorDamageReduction = copy.armorDamageReduction;
	this->name = copy.name;
	std::cout << this->name << " was thankfully created by alromero" << std::endl;
	srand((unsigned int)time(0));
}

ScavTrap&	ScavTrap::operator =(const ScavTrap &copy)
{
	this->hitPoints = copy.hitPoints;
	this->maxHitPoints = copy.maxHitPoints;
	this->energyPoints = copy.energyPoints;
	this->maxEnergyPoints = copy.maxEnergyPoints;
	this->level = copy.level;
	this->meleeAttackDamage = copy.meleeAttackDamage;
	this->rangedAttackDamage = copy.rangedAttackDamage;
	this->armorDamageReduction = copy.armorDamageReduction;
	this->name = copy.name;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << this->name << " was destroyed by alromero" << std::endl;
}

void	ScavTrap::challengeNewcomer(void)
{
	std::string hola[5] = 
	{
	    "You versus me! Me versus you! Either way!",
		"I will prove to you my robotic superiority!",
	    "Dance battle! Or, you know... regular battle",
	    "Man versus machine! Very tiny streamlined machine!",
	    "Care to have a friendly duel?" 
	}; 
	std::cout << this->name << " said: \"" << hola[rand() % 5] << "\"" << std::endl;
}