/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 19:09:47 by alromero          #+#    #+#             */
/*   Updated: 2020/06/12 18:38:08 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	this->hitPoints = this->FragTrap::hitPoints;
	this->maxHitPoints = this->FragTrap::maxHitPoints;
	this->energyPoints = this->NinjaTrap::energyPoints;
	this->maxEnergyPoints = this->NinjaTrap::maxEnergyPoints;
	this->level = 1;
	this->name = "Unnamed SP3R-TP";
	this->meleeAttackDamage = this->NinjaTrap::meleeAttackDamage;
	this->rangedAttackDamage = this->FragTrap::rangedAttackDamage;
	this->armorDamageReduction = this->FragTrap::armorDamageReduction;
	std::cout << "Combining the forces of both a FragTrap and a NinjaTrap sides, the SuperTrap \"" << name << "\" was created" << std::endl;
}

SuperTrap::SuperTrap(std::string const &name)
{
	this->hitPoints = this->FragTrap::hitPoints;
	this->maxHitPoints = this->FragTrap::maxHitPoints;
	this->energyPoints = this->NinjaTrap::energyPoints;
	this->maxEnergyPoints = this->NinjaTrap::maxEnergyPoints;
	this->level = 1;
	this->name = name;
	this->meleeAttackDamage = this->NinjaTrap::meleeAttackDamage;
	this->rangedAttackDamage = this->FragTrap::rangedAttackDamage;
	this->armorDamageReduction = this->FragTrap::armorDamageReduction;
	std::cout << "Combining the forces of both a FragTrap and a NinjaTrap sides, the SuperTrap \"" << name << "\" was created" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->maxHitPoints = copy.maxHitPoints;
	this->energyPoints = copy.energyPoints;
	this->maxEnergyPoints = copy.maxEnergyPoints;
	this->level = 1;
	this->meleeAttackDamage = copy.meleeAttackDamage;
	this->rangedAttackDamage = copy.rangedAttackDamage;
	this->armorDamageReduction = copy.armorDamageReduction;
	std::cout << "The supertrap \"" << name << "\" was created" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "The supertrap \"" << name << "\" was destroyed and erased by the OS" << std::endl;
}

SuperTrap& SuperTrap::operator=(const SuperTrap& other)
{
	this->hitPoints = other.hitPoints;
	this->maxHitPoints = other.maxHitPoints;
	this->energyPoints = other.energyPoints;
	this->maxEnergyPoints = other.maxEnergyPoints;
	this->level = other.level;
	this->meleeAttackDamage = other.meleeAttackDamage;
	this->rangedAttackDamage = other.rangedAttackDamage;
	this->armorDamageReduction = other.armorDamageReduction;
	this->name = other.name;
	return (*this);
}
