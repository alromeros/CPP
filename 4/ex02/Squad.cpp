/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 13:17:15 by alromero          #+#    #+#             */
/*   Updated: 2020/07/02 16:35:23 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
:	count(0), unit(NULL)
{

}

Squad::Squad( Squad const &other )
:	count(0), unit(NULL)
{
	for (int i = 0; i < other.getCount(); i++)
		this->push(other.getUnit(i)->clone());
}

Squad::~Squad()
{
	for (int i = 0; i < this->count; i++)
		delete this->unit[i];
	delete[] (this->unit);
}

Squad& 			Squad::operator=(Squad const &other )
{
	if (this->unit)
	{
		for (int i = 0; i < this->count; i++)
			delete this->unit[i];
		delete this->unit;
		this->unit = NULL;
	}
	this->count = 0;
	for (int i = 0; i < other.getCount(); i++)
		this->push(other.getUnit(i)->clone());
	return (*this);
}

int				Squad::getCount() const
{
	return (this->count);
}

ISpaceMarine*	Squad::getUnit(int n) const
{
	if (n < 0 || n >= this->count)	
		return (NULL);
	return (this->unit[n]);
}

int				Squad::push(ISpaceMarine* n)
{
	if (!n)
		return (this->count);
	if (this->unit)
	{
		for (int i = 0; i < this->count; i++)
			if (this->getUnit(i) == n)
				return (this->count);
		ISpaceMarine **copy = new ISpaceMarine*[this->count + 1];
		for (int i = 0; i < this->count; i++)
			copy[i] = getUnit(i);
		delete[] this->unit;
		copy[this->count] = n;
		this->unit = copy;
	}
	else
	{
		this->unit = new ISpaceMarine*[1];
		this->unit[0] = n;
		this->count = 0;
	}
	return (++(this->count));
}
