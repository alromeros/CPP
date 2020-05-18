/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 18:00:38 by alromero          #+#    #+#             */
/*   Updated: 2020/04/20 15:16:45 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

std::string random_name(void)
{
	char *s;

	s = new char[12];
	srand(time(NULL));
	static const char alphanum[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < 12; ++i) 
        s[i] = alphanum[rand() % (53)];

    s[12] = 0;
	return ((std::string)s);
}

Zombie *ZombieEvent::randomChump(void)
{
	Zombie *random;

	random->name = random_name();
	std::cout << "MY NAME IS " << random->name << std::endl;
	return (random);
}

void 		ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *clase;

	clase = new Zombie;
	clase->name = name;
	clase->type = this->type;
	return (clase);
}
