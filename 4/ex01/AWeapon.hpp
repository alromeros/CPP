/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 12:46:00 by alromero          #+#    #+#             */
/*   Updated: 2020/06/08 16:05:18 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon
{
	private:
		std::string name;
		int			aPCost;
		int			damage;
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon();
		AWeapon( const AWeapon &other );
		AWeapon& operator=(const AWeapon &other );
		virtual 			~AWeapon();
		std::string virtual getName() const;
		int 				getAPCost() const;
		int 				getDamage() const;
		virtual void 		attack() const = 0;

		void				setDamage( int damage );
		void				setAPCost ( int apcost );
		void				setName( std::string name );
};

#endif