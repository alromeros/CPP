/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 12:37:42 by alromero          #+#    #+#             */
/*   Updated: 2020/05/27 14:56:40 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		const Weapon *weapon;
		std::string name;
	public:
		void		attack();
		void		setWeapon(const Weapon &weapon);
		HumanB(std::string name);
		void		setName(std::string name);
		std::string	getName(void);
};

#endif