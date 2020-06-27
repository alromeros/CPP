/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 13:03:36 by alromero          #+#    #+#             */
/*   Updated: 2020/06/26 17:36:54 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Squad.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"

int main()
{
	std::cout << "Old main: \n" << std::endl;

	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << "\nNew main: \n" << std::endl;

	ISpaceMarine* you = new TacticalMarine;
	ISpaceMarine* me = new AssaultTerminator;
	ISpaceMarine* dog = new TacticalMarine;
	ISpaceMarine* goldenDog = new AssaultTerminator;
	ISpaceMarine* dalmata = new TacticalMarine;
	ISpaceMarine* labrador = new AssaultTerminator;
	ISpaceMarine* mongrel = new TacticalMarine;

	Squad patrullaCanina;
	Squad *truePatrullaCanina = new Squad (patrullaCanina);

	truePatrullaCanina->push(you);
	truePatrullaCanina->push(me);
	std::cout << truePatrullaCanina->push(mongrel) << std::endl;
	truePatrullaCanina->push(dalmata);
	truePatrullaCanina->push(goldenDog);
	truePatrullaCanina->push(dog);
	std::cout << truePatrullaCanina->push(labrador) << std::endl;
	std::cout << truePatrullaCanina->push(NULL) << std::endl;

	for (int i = 0; i < truePatrullaCanina->getCount(); ++i)
	{
		ISpaceMarine* doggo = truePatrullaCanina->getUnit(i);
		doggo->battleCry();
		doggo->rangedAttack();
		doggo->meleeAttack();
		doggo = doggo->clone();
		delete doggo;
	}
	delete (truePatrullaCanina);
	return 0;
}
