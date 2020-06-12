/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 17:23:46 by alromero          #+#    #+#             */
/*   Updated: 2020/06/11 13:31:42 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	this->name = "Unnamed CL4P-TP";
	std::cout << this->name << " was assembled!"  << std::endl;
	srand((unsigned int)time(0));
}

ClapTrap::ClapTrap(std::string const &str)
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	this->name = str;
	if (!str.length())
		this->name = "Unnamed CL4P-TP";
	std::cout << this->name << " was assembled!" << std::endl;
	srand((unsigned int)time(0));
}

ClapTrap::ClapTrap( const ClapTrap &copy )
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
	std::cout << this->name << " was created by an unknown god or OS" << std::endl;
	srand((unsigned int)time(0));
}

ClapTrap&	ClapTrap::operator =(const ClapTrap &copy)
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

void 		ClapTrap::rangedAttack(std::string const & target)
{
	if (this->hitPoints > 0)
	{
		std::cout << this->name << " said: \"AAAAAAAAAAAAARGHH\" after attacking " 
		<<	target << " at range, causing " << this->rangedAttackDamage <<
		" points of damage!" << std::endl;
		this->energyPoints -= 5;
	}
	else
		std::cout << this->name << " is broken and can't do anything!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
	if (this->hitPoints > 0)
	{
		std::cout << this->name << " said: \"AAAAAAAAAAAAARGHH\" after attacking " 
		<<	target << " at melee, causing " << this->meleeAttackDamage <<
		" points of damage!" << std::endl;
		this->energyPoints -= 10;
	}
	else
		std::cout << this->name << " is broken and can't do anything!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
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
			std::cout << this->name << " said: \"I'll die the way I lived: annoying!\" and died after receiving " << amount 
			<< " points of damage" << std::endl;
		}
		else
			std::cout << this->name << " said: \"Huh, that hurts, robot's don't do that...\" after receiving " << amount
			<< " points of damage and losing 1 Armor Points" << std::endl;
	}
	else
		std::cout << this->name << " is broken and even his corpse can't take damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->hitPoints += amount;
	if (this->hitPoints > this->maxHitPoints)
		this->hitPoints = this->maxHitPoints;
	this->energyPoints += amount / 2;
	this->armorDamageReduction++;
	std::cout << this->name << " said: \"Can I just say... yeehaw\" and received " << amount << 
	" Hit Points, " << (amount/2) << " Energy Points and 1 Armor Points" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << " was destroyed and erased by the OS" << std::endl;
}

void ClapTrap::setHitPoints( int points )
{
	this->hitPoints = points;
}

void ClapTrap::setMaxHitPoints(int points)
{
	this->maxHitPoints = points;
}

void ClapTrap::setEnergyPoints(int points)
{
	this->energyPoints = points;
}

void ClapTrap::setMaxEnergyPoints(int points)
{
	this->maxEnergyPoints = points;
}

void ClapTrap::setName(std::string name)
{
	this->name = name;
}

void ClapTrap::setMeleeAttackDamage(int points)
{
	this->meleeAttackDamage = points;
}

void ClapTrap::setRangedAttackDamage(int points)
{
	this->rangedAttackDamage = points;
}

void ClapTrap::setArmorDamageReduction(int points)
{
	this->armorDamageReduction = points;
}

int ClapTrap::getHitPoints(void)
{
	return (this->hitPoints);
}

int ClapTrap::getMaxHitPoints(void)
{
	return (this->maxHitPoints);
}

int ClapTrap::getEnergyPoints(void)
{
	return (this->energyPoints);
}

int ClapTrap::getMaxEnergyPoints(void)
{
	return (this->maxEnergyPoints);
}

std::string ClapTrap::getName(void)
{
	return (this->name);
}

int ClapTrap::getMeleeAttackDamage(void)
{
	return (this->meleeAttackDamage);
}

int ClapTrap::getRangedAttackDamage(void)
{
	return (this->rangedAttackDamage);
}

int ClapTrap::getArmorDamageReduction(void)
{
	return (this->armorDamageReduction);
}
