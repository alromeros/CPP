/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 14:32:34 by alromero          #+#    #+#             */
/*   Updated: 2020/06/25 21:43:05 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion: public Enemy // buen grupo
{
	public:
		RadScorpion();
		RadScorpion( const RadScorpion& other );
		~RadScorpion();
		RadScorpion& operator=( const RadScorpion& other );

};

#endif
