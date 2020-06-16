/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 17:24:45 by alromero          #+#    #+#             */
/*   Updated: 2020/06/16 11:22:05 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <ctime>

class ClapTrap
{
	protected:
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
		ClapTrap();
		ClapTrap(std::string const &str);
		ClapTrap( const ClapTrap &f );
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		ClapTrap &operator =(const ClapTrap &f);
		~ClapTrap();
		
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
