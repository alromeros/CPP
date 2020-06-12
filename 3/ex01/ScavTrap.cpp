/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 16:23:04 by alromero          #+#    #+#             */
/*   Updated: 2020/06/11 13:31:17 by alromero         ###   ########.fr       */
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
	this->name = "Unnamed SC4V-TP";
	std::cout << this->name << " was thankfully created by alromero"  << std::endl;
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
	this->name = str;
	if (!str.length())
		this->name = "Unnamed SC4V-TP";
	std::cout << this->name << " was thankfully created by alromero" << std::endl;
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

void 		ScavTrap::rangedAttack(std::string const & target)
{
	if (this->hitPoints > 0)
	{
		std::cout << this->name << " said: \"I will prove to you my robotic superiority!\" after attacking " 
		<<	target << " at range, causing " << this->rangedAttackDamage <<
		" points of damage!" << std::endl;
		this->energyPoints -= 5;
	}
	else
		std::cout << this->name << " is broken and can't do anything!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
	if (this->hitPoints > 0)
	{
		std::cout << this->name << " said: \"Woohoo! In your face!\" after attacking " 
		<<	target << " at melee, causing " << this->meleeAttackDamage <<
		" points of damage!" << std::endl;
		this->energyPoints -= 10;
	}
	else
		std::cout << this->name << " is broken and can't do anything!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > 0)
	{
		if (this->armorDamageReduction && this->armorDamageReduction < (int)amount)
			amount -= (this->armorDamageReduction)--;
		else if ((this->armorDamageReduction)-- >= (int)amount)
			amount = 0;
		this->hitPoints -= amount;
		if (this->hitPoints <= 0)
		{
			this->hitPoints = 0;
			std::cout << this->name << " said: \"No, nononono NO!\" and died after receiving " << amount 
			<< " points of damage" << std::endl;
		}
		else
			std::cout << this->name << " said: \"No fair! I wasn't ready\" after receiving " << amount
			<< " points of damage and losing 1 Armor Points" << std::endl;
	}
	else
		std::cout << this->name << " is broken and even his corpse can't take damage" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	this->hitPoints += amount;
	if (this->hitPoints > this->maxHitPoints)
		this->hitPoints = this->maxHitPoints;
	this->energyPoints += amount / 2;
	this->armorDamageReduction++;
	std::cout << this->name << " said: \"You love me, right?\" and received " << amount << 
	" Hit Points, " << (amount/2) << " Energy Points and 1 Armor Points" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->name << " was destroyed and erased by alromero" << std::endl;
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

void ScavTrap::setHitPoints( int points )
{
	this->hitPoints = points;
}

void ScavTrap::setMaxHitPoints(int points)
{
	this->maxHitPoints = points;
}

void ScavTrap::setEnergyPoints(int points)
{
	this->energyPoints = points;
}

void ScavTrap::setMaxEnergyPoints(int points)
{
	this->maxEnergyPoints = points;
}

void ScavTrap::setName(std::string name)
{
	this->name = name;
}

void ScavTrap::setMeleeAttackDamage(int points)
{
	this->meleeAttackDamage = points;
}

void ScavTrap::setRangedAttackDamage(int points)
{
	this->rangedAttackDamage = points;
}

void ScavTrap::setArmorDamageReduction(int points)
{
	this->armorDamageReduction = points;
}

int ScavTrap::getHitPoints(void)
{
	return (this->hitPoints);
}

int ScavTrap::getMaxHitPoints(void)
{
	return (this->maxHitPoints);
}

int ScavTrap::getEnergyPoints(void)
{
	return (this->energyPoints);
}

int ScavTrap::getMaxEnergyPoints(void)
{
	return (this->maxEnergyPoints);
}

std::string ScavTrap::getName(void)
{
	return (this->name);
}

int ScavTrap::getMeleeAttackDamage(void)
{
	return (this->meleeAttackDamage);
}

int ScavTrap::getRangedAttackDamage(void)
{
	return (this->rangedAttackDamage);
}

int ScavTrap::getArmorDamageReduction(void)
{
	return (this->armorDamageReduction);
}
