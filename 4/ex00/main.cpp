/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 14:52:20 by alromero          #+#    #+#             */
/*   Updated: 2020/07/02 16:38:50 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Victim.hpp"

int main()
{
	std::cout << "Old main: \n" << std::endl;

	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);

	std::cout << "\nNew main: \n" << std::endl;

	Sorcerer otro;
	Victim victim;
	Peon peon = joe;

	std::cout << otro;
	otro.polymorph(peon);
	std::cout << victim << peon;
	Sorcerer eo(otro);
	eo.polymorph(victim);

	return (0);
}
