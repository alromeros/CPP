/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 15:33:28 by alromero          #+#    #+#             */
/*   Updated: 2020/06/11 13:30:58 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	this->name = "Unnamed FR4G-TP";
	std::cout << this->name << " was created by an unknown god or OS"  << std::endl;
	srand((unsigned int)time(0));
}

FragTrap::FragTrap(std::string const &str)
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
		this->name = "Unnamed FR4G-TP";
	std::cout << this->name << " was created by an unknown god or OS" << std::endl;
	srand((unsigned int)time(0));
}

FragTrap::FragTrap( const FragTrap &copy )
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

FragTrap&	FragTrap::operator =(const FragTrap &copy)
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

void 		FragTrap::rangedAttack(std::string const & target)
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

void FragTrap::meleeAttack(std::string const & target)
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

void	FragTrap::takeDamage(unsigned int amount)
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

void	FragTrap::beRepaired(unsigned int amount)
{
	this->hitPoints += amount;
	if (this->hitPoints > this->maxHitPoints)
		this->hitPoints = this->maxHitPoints;
	this->energyPoints += amount / 2;
	this->armorDamageReduction++;
	std::cout << this->name << " said: \"Can I just say... yeehaw\" and received " << amount << 
	" Hit Points, " << (amount/2) << " Energy Points and 1 Armor Points" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << this->name << " was destroyed and erased by the OS" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->hitPoints > 0)
	{
		std::cout << this->name << " said: ";
		std::string hola[5] = {
			"\"Stop me before I kill again, except don't!\" " ,
			"\"Ha ha ha! Fall before your robot overlord!\" " ,
			"\"I am a tornado of death and bullets!\" " ,
			"\"Can't touch this!\" " ,
			"\"Wow, did I really do that?\" " 
		}; 
		if (this->energyPoints >= 25)
		{
			this->energyPoints -= 25;
			std::cout << hola[rand() % 5] << "after attacking " << target << std::endl;
		}
		else
			std::cout << "\"Ammo reserves are spent... Who needs ammo anyway, am I right?\""  << std::endl;
	}
	else
		std::cout << this->name << " is broken and can't do anything!" << std::endl;
}

void FragTrap::setHitPoints( int points )
{
	this->hitPoints = points;
}

void FragTrap::setMaxHitPoints(int points)
{
	this->maxHitPoints = points;
}

void FragTrap::setEnergyPoints(int points)
{
	this->energyPoints = points;
}

void FragTrap::setMaxEnergyPoints(int points)
{
	this->maxEnergyPoints = points;
}

void FragTrap::setName(std::string name)
{
	this->name = name;
}

void FragTrap::setMeleeAttackDamage(int points)
{
	this->meleeAttackDamage = points;
}

void FragTrap::setRangedAttackDamage(int points)
{
	this->rangedAttackDamage = points;
}

void FragTrap::setArmorDamageReduction(int points)
{
	this->armorDamageReduction = points;
}

int FragTrap::getHitPoints(void)
{
	return (this->hitPoints);
}

int FragTrap::getMaxHitPoints(void)
{
	return (this->maxHitPoints);
}

int FragTrap::getEnergyPoints(void)
{
	return (this->energyPoints);
}

int FragTrap::getMaxEnergyPoints(void)
{
	return (this->maxEnergyPoints);
}

std::string FragTrap::getName(void)
{
	return (this->name);
}

int FragTrap::getMeleeAttackDamage(void)
{
	return (this->meleeAttackDamage);
}

int FragTrap::getRangedAttackDamage(void)
{
	return (this->rangedAttackDamage);
}

int FragTrap::getArmorDamageReduction(void)
{
	return (this->armorDamageReduction);
}
