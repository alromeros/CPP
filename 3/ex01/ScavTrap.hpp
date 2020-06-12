/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 16:23:08 by alromero          #+#    #+#             */
/*   Updated: 2020/06/06 14:15:47 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <ctime>

class ScavTrap
{
	private:
		int hitPoints;
		int maxHitPoints;
		int energyPoints;
		int maxEnergyPoints;
		int level;
		std::string name;
		int meleeAttackDamage;
		int rangedAttackDamage;
		int armorDamageReduction;
	public:
		ScavTrap();
		ScavTrap(std::string const &str);
		ScavTrap( const ScavTrap &copy );
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ScavTrap &operator =(const ScavTrap &copy);
		~ScavTrap();

		void	challengeNewcomer(void);

		void setHitPoints( int points );
		void setMaxHitPoints(int points);
		void setEnergyPoints(int points);
		void setMaxEnergyPoints(int points);
		void setName(std::string name);
		void setMeleeAttackDamage(int points);
		void setRangedAttackDamage(int points);
		void setArmorDamageReduction(int points);

		int getHitPoints(void);
		int getMaxHitPoints(void);
		int getEnergyPoints(void);
		int getMaxEnergyPoints(void);
		std::string getName(void);
		int getMeleeAttackDamage(void);
		int getRangedAttackDamage(void);
		int getArmorDamageReduction(void);
};

#endif