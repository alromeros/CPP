/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 18:59:29 by alromero          #+#    #+#             */
/*   Updated: 2020/06/15 20:21:49 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include <ctime>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap: public virtual ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap( const NinjaTrap& copy);
		NinjaTrap(std::string const &str);
		~NinjaTrap();
		NinjaTrap&	operator=(const NinjaTrap &otro );
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void ninjaShoebox(NinjaTrap& ninja);
		void ninjaShoebox(FragTrap& frag);
		void ninjaShoebox(ScavTrap& scav);
		void ninjaShoebox(ClapTrap& clap);
};

#endif
