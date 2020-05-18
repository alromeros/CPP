/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 12:27:54 by alromero          #+#    #+#             */
/*   Updated: 2020/04/24 13:12:41 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		const Weapon &weapon;
	public:
		std::string name;
		void		attack() const;
		HumanA(std::string const &name, const Weapon &weapon);
};

#endif
