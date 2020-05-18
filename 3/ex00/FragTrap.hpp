/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 15:07:01 by alromero          #+#    #+#             */
/*   Updated: 2020/05/15 17:23:12 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class FragTrap
{
	public:
		int hitPoints;
		int maxHintPoints;
		int energyPoints;
		int maxEnergyPoints;
		int level;
		std::string name;
		int meleeAttackDamage;
		int rangedAttackDamage;
		int armorDamageReduction;
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		FragTrap();
		FragTrap(std::string str);
		FragTrap( const FragTrap &f );
		FragTrap &operator =(const FragTrap &f);
		~FragTrap();
};

#endif