/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 14:43:11 by alromero          #+#    #+#             */
/*   Updated: 2020/06/26 11:13:19 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name)
:			ap(40), name(name), weapon(NULL)
{

}

Character::Character()
:			ap(40), name("Unnamed"), weapon(NULL)
{

}

Character::~Character()
{

}

Character::Character(Character const &other)
:			ap(other.ap), name(other.name), weapon(other.weapon)
{

}

Character& 			Character::operator=(Character const &other)
{
	this->ap = other.ap;
	this->name = other.name;
	this->weapon = other.weapon;

	return (*this);
}

void 				Character::recoverAP()
{
	this->ap += 10;
	if (this->ap > 40)
		this->ap = 40;
	if (this->ap <= 0)
		this->ap = 0;
}

void 				Character::equip(AWeapon* weapon)
{
	this->weapon = weapon;
}

AWeapon*			Character::getWeapon(void) const
{
	return (this->weapon);
}

void 				Character::attack(Enemy* enemy)
{
	if (this->weapon)
	{
		if (!this->weapon || !enemy)
			return ;
		if (this->ap < this->weapon->getAPCost())
		{
			std::cout << "No AP enough!" << std::endl;
			return ;
		}
		this->ap -= this->weapon->getAPCost();
		std::cout << this->name << " attacks "
		<< enemy->getType() << " with a " <<	this->weapon->getName() << std::endl;
		this->weapon->attack();
		enemy->takeDamage(this->weapon->getDamage());
		if (!(enemy->getHp()))
		{
			std::cout << this->name
			<< " utterly destroyed a " << enemy->getType() << "!" << std::endl;
			delete enemy;
		}
	}
}
std::string			Character::getName() const
{
	return (this->name);
}
int					Character::getAp() const
{
	return (this->ap);
}

void				Character::setName(std::string name)
{
	this->name = name;
}

void				Character::setAp(int ap)
{
	this->ap = ap;
}

std::ostream& operator<<(std::ostream &out, Character const &other)
{
	if (other.getWeapon())
		out << other.getName() << " has " << other.getAp() << " AP and wields a " << other.getWeapon()->getName() << std::endl;
	else
		out << other.getName() << " has " << other.getAp() << " AP and is unarmed" << std::endl; 
	return (out);
}
