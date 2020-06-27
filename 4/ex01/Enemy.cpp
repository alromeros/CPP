/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 13:44:33 by alromero          #+#    #+#             */
/*   Updated: 2020/06/26 10:38:25 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
:				hp(hp), type(type)
{
	
}

Enemy::~Enemy()
{

}

Enemy::Enemy()
:		hp(0), type("untyped")
{

}

Enemy::Enemy ( Enemy const& other )
:	hp(other.hp), type(other.type)
{

}

Enemy& Enemy::operator=( Enemy const &other )
{
	this->hp = other.hp;
	this->type = other.type;

	return (*this);
}

std::string Enemy::getType() const
{
	return (this->type);
}

void	Enemy::setHp( int hp )
{
	this->hp = hp;
}

int		Enemy::getHp(void) const
{
	return (this->hp);
}

void Enemy::setType( std::string type )
{
	this->type = type;
}

void Enemy::takeDamage(int damage)
{
	if (damage >= 0)
		this->hp -= damage;
	if (this->hp < 0)
		this->hp = 0;
}