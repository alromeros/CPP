/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 15:13:46 by alromero          #+#    #+#             */
/*   Updated: 2020/06/26 17:37:01 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"

int main(void)
{

	std::cout << "Old main: \n" << std::endl;

	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	std::cout << "\nNew main: \n" << std::endl;

	Character		*unnamed = new Character();
	Enemy* 			cronk = new SuperMutant();
	Enemy* 			cronkCopia = new Enemy(*cronk);
	RadScorpion*	lilPet = new RadScorpion();
	AWeapon*		holyLaser = new PlasmaRifle();
	AWeapon*		godHand = new PowerFist();

	unnamed->equip(godHand);
	std::cout << *unnamed;
	unnamed->setName("MutantSlayer");
	std::cout << *unnamed;
	unnamed->attack(lilPet);
	std::cout << "lilPet current HP is : " << lilPet->getHp() << std::endl;
	unnamed->attack(lilPet);
	unnamed->equip(holyLaser);
	std::cout << *unnamed;
	unnamed->attack(cronk);
	unnamed->attack(cronkCopia);
	std::cout << *unnamed;
	*cronk = *cronkCopia;
	unnamed->attack(cronk);
	std::cout << "Cronk current HP is : " << cronk->getHp() << std::endl;
	std::cout << "CronkCopia current HP is : " << cronkCopia->getHp() << std::endl;
	unnamed->attack(cronk);
	unnamed->attack(cronkCopia);
	unnamed->equip(godHand);
	unnamed->attack(cronk);
	unnamed->attack(cronkCopia);
	unnamed->recoverAP();
	unnamed->recoverAP();
	unnamed->recoverAP();
	unnamed->recoverAP();
	std::cout << *unnamed;
	unnamed->attack(cronk);
	unnamed->attack(cronkCopia);
	std::cout << "Cronk current HP is : " << cronk->getHp() << std::endl;
	std::cout << "CronkCopia current HP is : " << cronkCopia->getHp() << std::endl;
	unnamed->equip(holyLaser);
	unnamed->attack(cronk);
	unnamed->attack(cronkCopia);
	unnamed->equip(godHand);
	unnamed->attack(cronk);
	unnamed->attack(cronkCopia);
	unnamed->recoverAP();
	unnamed->attack(cronk);
	unnamed->attack(cronkCopia);
	std::cout << "CronkCopia current HP is : " << cronkCopia->getHp() << std::endl;
	unnamed->recoverAP();
	unnamed->attack(cronkCopia);

	delete me;
	delete unnamed;
	delete pr;
	delete pf;
	delete holyLaser;
	delete godHand;

	return 0;
}