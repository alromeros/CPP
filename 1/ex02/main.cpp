/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 18:00:28 by alromero          #+#    #+#             */
/*   Updated: 2020/04/20 15:19:49 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	std::string type;
	std::string name;

	Zombie 		*muerto;
	muerto = new Zombie;
	ZombieEvent prueba;
	muerto->announce();
	prueba.randomChump();
	prueba.setZombieType("Gordo");
	delete(muerto);
	muerto = prueba.newZombie("Pepito");
	muerto->announce();
}