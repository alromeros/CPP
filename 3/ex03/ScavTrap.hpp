/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 16:23:08 by alromero          #+#    #+#             */
/*   Updated: 2020/06/15 12:58:39 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <ctime>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string const &str);
		ScavTrap( const ScavTrap &copy );
		ScavTrap &operator =(const ScavTrap &copy);
		~ScavTrap();
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void	challengeNewcomer(void);
};

#endif