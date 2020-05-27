/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 18:00:28 by alromero          #+#    #+#             */
/*   Updated: 2020/05/27 14:06:36 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent 	prueba;
	Zombie 			*muerto = new Zombie("Fantasma", "Celia");
	Zombie			muertoTwo("Psíquico", "Pedro");
	muerto->announce();
	prueba.setZombieType("Fuego");
	delete(muerto);
	muerto = prueba.newZombie("Elvira");
	muerto->announce();
	muerto = prueba.randomChump();
	prueba.setZombieType("Planta");
	delete(muerto);
	muertoTwo.announce();
}