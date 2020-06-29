/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 13:38:55 by alromero          #+#    #+#             */
/*   Updated: 2020/06/29 18:24:20 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy
{	
	private:
		int 		hp;
		std::string type;
	public:
		Enemy(int hp, std::string const & type);
		virtual ~Enemy();
		Enemy();
		Enemy ( Enemy const& other );
		Enemy& operator=( Enemy const &other );
		
		std::string virtual getType() const;
		virtual void takeDamage(int);
		void setHp( int hp );
		void setType( std::string type );
		int	 getHp(void) const;
};

#endif