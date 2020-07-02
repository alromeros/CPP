/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 14:38:10 by alromero          #+#    #+#             */
/*   Updated: 2020/06/29 22:51:28 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:
		int 	ap;
		std::string name;
		AWeapon *weapon;
	public:
		Character(std::string const & name);
		virtual ~Character();
		Character(Character const &other);
		Character();
		Character& 			operator=(Character const &other);

		void 				recoverAP();
		void 				equip(AWeapon*);
		void 				attack(Enemy*);
		std::string virtual getName() const;
		int					getAp() const;
		void				setName(std::string name);
		void				setAp(int ap);

		AWeapon*			getWeapon(void) const;
};

std::ostream& operator<<(std::ostream &out, Character const &other);

#endif