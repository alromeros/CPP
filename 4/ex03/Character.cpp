/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:19:39 by alromero          #+#    #+#             */
/*   Updated: 2020/06/28 00:49:14 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name):
	name(name), equipped(0)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
}

Character::Character(Character const &other):
	name(other.name), equipped(0)
{
	for (int i = 0; i < other.equipped; i++)
		this->equip(other.inventory[i]->clone());
	for (int i = this->equipped; i < 4; i++)
		this->inventory[i] = nullptr;
}

Character::~Character()
{
	for (int i = 0; i < this->equipped; i++)
		delete this->inventory[i];
}

Character &Character::operator=(Character const &other)
{
	this->name = other.name;
	for (int i = 0; i < this->equipped; i++)
		delete this->inventory[i];
	this->equipped = 0;
	for (int i = 0; i < other.equipped; i++)
		this->equip(other.inventory[i]->clone());
	for (int i = this->equipped; i < 4; i++)
		this->inventory[i] = nullptr;
	return (*this);
}

std::string const &Character::getName(void) const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
	if (this->equipped == 4 || m == nullptr)
		return ;
	for (int i = 0; i < this->equipped; i++)
		if (this->inventory[i] == m)
			return ;
	this->inventory[this->equipped++] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= this->equipped || this->inventory[idx] == nullptr)
		return ;
	for (int i = idx; i < 3; i++)
	{
		this->inventory[i] = this->inventory[i + 1];
		this->inventory[i + 1] = nullptr;
	}
	this->equipped--;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= this->equipped || this->inventory[idx] == nullptr)
		return ;
	this->inventory[idx]->use(target);
}

/*#include "Character.hpp"

Character::Character()
:			name("")
{
	for (int i = 0; i > 4; i++)
	{
		slot[i] = nullptr;
		checker[i] = 0;
	}
}

Character::Character( Character const &other )
:			name(other.name)
{
	for (int i = 0; i < 4; i++)
	{
		this->slot[i] = other.getSlot(i);
		checker[i] = 0;
	}
}

Character::Character( std::string const name )
:			name(name)
{
	for (int i = 0; i > 4; i++)
	{
		slot[i] = nullptr;
		checker[i] = 0;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->slot[i] && this->checker[i] != 0)
		{
			delete this->slot[i];
			this->checker[i] = 0;
		}
}

Character &Character::operator=(Character const &other)
{

	for (int i = 0; i < 4; i++)
		if (this->slot[i] != nullptr && checker[i] == 1)
		{
			checker[i] = 0;
			delete this->slot[i];
			this->slot[i] = nullptr;
		}
	this->name = other.getName();
	for (int i = 0; i < 4; i++)
		if (other.slot[i] != nullptr && other.checker[i] != 0)
		{
			this->checker[i] = 1;
			this->equip(other.slot[i]->clone());
		}
	for (int i = 0; i < 4; i++)
		if (other.slot[i] == nullptr && other.checker[i] == 0)
		{
			this->checker[i] = 0;
			this->slot[i] = nullptr;
		}
	return (*this);
}


void Character::equip(AMateria *m)
{
	if (m == nullptr)
		return ;
	for (int i = 0; i < 4; i++)
		if (this->slot[i] == m)
			return ;
	for (int i = 0; i < 4; i++)
	{
		if ((this->slot[i] == nullptr && this->checker[i] == 0))
		{
			this->checker[i] = 1;
			this->slot[i] = m;
			break ;
		}
	}
			
}

void Character::unequip(int idx)
{
	if (idx < 0 || this->slot[idx] == nullptr || checker[idx] == 0)
		return ;
	if (idx < 4 && idx >= 0)
	{
		this->slot[idx] = nullptr;
		checker[idx] = 0;
	}
}

void Character::
use(int idx, ICharacter &target)
{
 	if (idx < 0 || idx >= 4 || this->slot[idx] == nullptr || this->checker[idx] == 0)
			return ;
	this->slot[idx]->use(target);
}

std::string const & 						Character::getName() const
{
	return (this->name);
}

void										Character::setName(std::string const name)
{
	this->name = name;
}

AMateria 									*Character::getSlot(int i) const
{
	return (slot[i]);
}

void										Character::setChecker(int idx)
{
	if (idx > 3 || idx < 0)
		return ;
	this->checker[idx] = 1;
}
int											Character::getChecker(int idx) const
{
	if (idx > 3 || idx < 0)
		return (0);
	return (this->checker[idx]);
}*/
