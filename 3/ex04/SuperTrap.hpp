/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 19:09:51 by alromero          #+#    #+#             */
/*   Updated: 2020/06/12 18:03:46 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap: public NinjaTrap, public FragTrap
{
	public:
		SuperTrap();
		SuperTrap(const SuperTrap& copy);
		~SuperTrap();
		SuperTrap( std::string const &name );
		SuperTrap& operator=(const SuperTrap& other);
};

#endif