/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 18:59:26 by alromero          #+#    #+#             */
/*   Updated: 2020/06/15 21:02:56 by alromero         ###   ########.fr       */
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

void 		NinjaTrap::rangedAttack(std::string const & target)
{
	if (this->hitPoints > 0)
	{
		std::cout << this->name << " said: \"Now I will dominate!\" after attacking " 
		<<	target << " at range, causing " << this->rangedAttackDamage <<
		" points of damage!" << std::endl;
		this->energyPoints -= 5;
	}
	else
		std::cout << this->name << " is broken and can't do anything!" << std::endl;
}

void 		NinjaTrap::meleeAttack(std::string const & target)
{
	if (this->hitPoints > 0)
	{
		std::cout << this->name << " said: \"Don't bother with plastic surgery - there's NO fixing that!\" after attacking " 
		<<	target << " at melee, causing " << this->meleeAttackDamage <<
		" points of damage!" << std::endl;
		this->energyPoints -= 10;
	}
	else
		std::cout << this->name << " is broken and can't do anything!" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap& ninja)
{
	if (this->hitPoints > 0)
	{
		std::cout << this->name << " said: \"殺してやる！\" after attacking " 
		<<	ninja.name << " with a shuriken-shaped gear, causing " << this->rangedAttackDamage <<
		" points of damage!" << std::endl;	
		ninja.hitPoints -= 20;
		if (ninja.hitPoints < 0)
			ninja.hitPoints = 0;
	}
	else
	{	
		ninja.hitPoints -= 99;
		if (ninja.hitPoints < 0)
			ninja.hitPoints = 0;
		std::cout << this->name << "'s autodestruction plan was activated. "
		<<	ninja.name << " reveived 99 points of damage" << std::endl;
	}
}

void NinjaTrap::ninjaShoebox(FragTrap& frag)
{
	int temp;

	if (this->hitPoints > 0)
	{
		std::cout << this->name << " said: \"殺してやる！\" after attacking " 
		<<	frag.getName() << " with a shuriken-shaped gear, causing " << this->rangedAttackDamage <<
		" points of damage!" << std::endl;
		temp = frag.getHitPoints() - 20;
		if (temp < 0)
			temp = 0;	
		frag.setHitPoints(temp);
	}
	else
	{	
		temp = frag.getHitPoints() - 99;
		if (temp < 0)
			temp = 0;	
		frag.setHitPoints(temp);
		std::cout << this->name << "'s autodestruction plan was activated. "
		<<	frag.getName() << " reveived 99 points of damage" << std::endl;
	}
}

void NinjaTrap::ninjaShoebox(ScavTrap& scav)
{
	int temp;

	if (this->hitPoints > 0)
	{
		std::cout << this->name << " said: \"殺してやる！\" after attacking " 
		<<	scav.getName() << " with a shuriken-shaped gear, causing " << this->rangedAttackDamage <<
		" points of damage!" << std::endl;
		temp = scav.getHitPoints() - 20;
		if (temp < 0)
			temp = 0;	
		scav.setHitPoints(temp);
	}
	else
	{	
		temp = scav.getHitPoints() - 99;
		if (temp < 0)
			temp = 0;	
		scav.setHitPoints(temp);
		std::cout << this->name << "'s autodestruction plan was activated. "
		<<	scav.getName() << " reveived 99 points of damage" << std::endl;
	}
}

void NinjaTrap::ninjaShoebox(ClapTrap& clap)
{
	int temp;

	if (this->hitPoints > 0)
	{
		std::cout << this->name << " said: \"殺してやる！\" after attacking " 
		<<	clap.getName() << " with a shuriken-shaped gear, causing " << this->rangedAttackDamage <<
		" points of damage!" << std::endl;
		temp = clap.getHitPoints() - 20;
		if (temp < 0)
			temp = 0;	
		clap.setHitPoints(temp);
	}
	else
	{	
		temp = clap.getHitPoints() - 99;
		if (temp < 0)
			temp = 0;	
		clap.setHitPoints(temp);
		std::cout << this->name << "'s autodestruction plan was activated. "
		<<	clap.getName() << " reveived 99 points of damage" << std::endl;
	}
}
