/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 18:59:26 by alromero          #+#    #+#             */
/*   Updated: 2020/06/11 17:05:54 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
	std::cout << this->name << " was renamed \"";
	this->name = "Unnamed NJ4-TP";
	std::cout << this->name << "\" after being converted to a NJ4-TP"  << std::endl;
	srand((unsigned int)time(0));
}

NinjaTrap::NinjaTrap(std::string const &str)
{
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
	std::cout << this->name << " was renamed \"";
	this->name = str;
	if (!str.length())
		this->name = "Unnamed NJ4-TP";
	std::cout << this->name << "\" after being converted to a NJ4-TP"  << std::endl;
	srand((unsigned int)time(0));
}

NinjaTrap::NinjaTrap( const NinjaTrap &copy )
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

NinjaTrap&	NinjaTrap::operator =(const NinjaTrap &copy)
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

NinjaTrap::~NinjaTrap()
{
	std::cout << this->name << " was destroyed by alromero" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap& ninja)
{
	ninja.hitPoints -= 20;
	if (ninja.hitPoints < 0)
		ninja.hitPoints = 0;
}

void NinjaTrap::ninjaShoebox(FragTrap& frag)
{
	int temp;

	temp = frag.getHitPoints();
	temp -= 20;
	if (temp < 0)
		temp = 0;
	frag.setHitPoints(temp);
}

void NinjaTrap::ninjaShoebox(ScavTrap& scav)
{
	int temp;

	temp = scav.getHitPoints();
	temp -= 20;
	if (temp < 0)
		temp = 0;
	scav.setHitPoints(temp);
}

void NinjaTrap::ninjaShoebox(ClapTrap& clap)
{
	int temp;

	temp = clap.getHitPoints();
	temp -= 20;
	if (temp < 0)
		temp = 0;
	clap.setHitPoints(temp);
}
