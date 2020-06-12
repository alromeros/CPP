/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 15:07:01 by alromero          #+#    #+#             */
/*   Updated: 2020/06/06 14:15:40 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <ctime>

class FragTrap
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
		FragTrap();
		FragTrap(std::string const &str);
		FragTrap( const FragTrap &f );
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		FragTrap &operator =(const FragTrap &f);
		~FragTrap();

		void	vaulthunter_dot_exe(std::string const & target);

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