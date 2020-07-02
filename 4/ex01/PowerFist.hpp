/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 13:18:08 by alromero          #+#    #+#             */
/*   Updated: 2020/06/29 22:51:28 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PowerFist_HPP
#define PowerFist_HPP

#include <iostream>
#include "AWeapon.hpp"

class PowerFist: public AWeapon
{
	public:
		PowerFist();
		PowerFist( PowerFist const &other );
		virtual ~PowerFist();
		PowerFist& operator=( const PowerFist& other );
		void	attack( void ) const;
};

#endif