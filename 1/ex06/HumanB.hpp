/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 12:37:42 by alromero          #+#    #+#             */
/*   Updated: 2020/04/24 14:44:15 by alromero         ###   ########.fr       */
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
	public:
		std::string name;
		void		attack();
		void		setWeapon(const Weapon &weapon);
		HumanB(std::string name);
};

#endif