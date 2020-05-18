/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 15:33:28 by alromero          #+#    #+#             */
/*   Updated: 2020/05/15 17:25:28 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	hitPoints = 100;
	maxHintPoints = 100;
	energyPoints = 100;
	maxEnergyPoints = 100;
	level = 1;
	meleeAttackDamage = 30;
	rangedAttackDamage = 20;
	armorDamageReduction = 5;
}

FragTrap::FragTrap(std::string str)
{
	hitPoints = 100;
	maxHintPoints = 100;
	energyPoints = 100;
	maxEnergyPoints = 100;
	level = 1;
	meleeAttackDamage = 30;
	rangedAttackDamage = 20;
	armorDamageReduction = 5;
	name = str;
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " 
	<<	target << " at range, causing " << this->rangedAttackDamage <<
	" points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " 
	<<	target << " at melee, causing " << this->meleeAttackDamage <<
	" points of damage!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << ":(" << std::endl;
}