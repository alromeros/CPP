/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 13:08:57 by alromero          #+#    #+#             */
/*   Updated: 2020/06/29 18:24:18 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
	public:
		PlasmaRifle();
		PlasmaRifle( PlasmaRifle const &other );
		virtual ~PlasmaRifle();
		PlasmaRifle& operator=( const PlasmaRifle& other );
		
		void	attack( void ) const;
};

#endif