/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 11:31:15 by alromero          #+#    #+#             */
/*   Updated: 2020/06/29 18:37:30 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->slot[i])
			delete (this->slot[i]);
	delete[] slot;
}

MateriaSource::MateriaSource()
:			slot(NULL)
{
	slot = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const &other )
:			slot(NULL)
{
	slot = new AMateria*[4];
	for (int i = 0; i < 4; i++)
	{
		if (other.slot[i])
			this->slot[i] = other.slot[i]->clone();
		else
			this->slot[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=( MateriaSource const &other )
{
	for (int i = 0; i < 4; i++)
		if (this->slot[i])
			delete(slot[i]);
	for (int i = 0; i < 4; i++)
	{
		if (other.slot[i])
			this->slot[i] = other.slot[i]->clone();
		else
			this->slot[i] = NULL;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria*	mt)
{
	if (!mt)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!(this->slot[i]))
		{
			this->slot[i] = mt;
			return ;
		}
	}
	delete mt;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->slot[i])
			if ((this->slot[i]->getType() == type))
				return (this->slot[i]->clone());
	}
	return (nullptr);
}
