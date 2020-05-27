/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 12:27:54 by alromero          #+#    #+#             */
/*   Updated: 2020/05/27 14:58:47 by alromero         ###   ########.fr       */
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
		std::string name;
	public:
		void		attack() const;
		HumanA(std::string const &name, const Weapon &weapon);
		void		setName(std::string name);
		std::string	getName(void);
};

#endif
