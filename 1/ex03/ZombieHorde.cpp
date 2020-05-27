/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 18:27:49 by alromero          #+#    #+#             */
/*   Updated: 2020/05/21 13:46:59 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>
#include <random>

std::string random_name(void)
{
	const std::string CHARACTERS = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    std::random_device random_device;
    std::mt19937 generator(random_device());
    std::uniform_int_distribution<> distribution(0, CHARACTERS.size() - 1);
    std::string random_string;
    for (std::size_t i = 0; i < 12; ++i)
    {
        random_string += CHARACTERS[distribution(generator)];
    }
    return random_string;
}

ZombieHorde::ZombieHorde(int n)
{
	this->n = n;
	this->horde = new Zombie[n];
	for (int i = 0; i < n; i++)
		this->horde[i].setName(random_name());
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->horde;
}

void ZombieHorde::announce()
{
	for (int i = 0; i < this->n; i++)
		this->horde[i].announce();
}

void	ZombieHorde::setN(int n)
{
	this->n = n;
}

void	ZombieHorde::setHorde(Zombie *horde)
{
	this->horde = horde;
}

int		ZombieHorde::getN(void)
{
	return (this->n);
}

Zombie	*ZombieHorde::getHorde(void)
{
	return (this->horde);
}
