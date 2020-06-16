/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 15:33:28 by alromero          #+#    #+#             */
/*   Updated: 2020/06/15 20:33:19 by alromero         ###   ########.fr       */
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
	std::cout << this->name << " was renamed \"";
	this->name = "Unnamed FR4G-TP";
	std::cout << this->name << "\" after being converted to a FR4G-TP"  << std::endl;
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
	std::cout << this->name << " was renamed \"";
	this->name = str;
	if (!str.length())
		this->name = "Unnamed FR4G-TP";
	std::cout << this->name << "\" after being converted to a FR4G-TP"  << std::endl;
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

FragTrap::~FragTrap()
{
	std::cout << this->name << " was destroyed by alromero" << std::endl;
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
