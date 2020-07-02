/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 14:18:24 by alromero          #+#    #+#             */
/*   Updated: 2020/06/29 22:51:28 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include <iostream>
#include "Enemy.hpp"

class SuperMutant: public Enemy // buen grupo
{
	public:
		SuperMutant();
		SuperMutant( const SuperMutant& other );
		virtual ~SuperMutant();
		SuperMutant& operator=( const SuperMutant& other );

		void	takeDamage(int);
};

#endif
