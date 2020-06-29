/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 14:32:34 by alromero          #+#    #+#             */
/*   Updated: 2020/06/29 18:24:15 by alromero         ###   ########.fr       */
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
		virtual ~RadScorpion();
		RadScorpion& operator=( const RadScorpion& other );
};

#endif
