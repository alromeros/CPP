/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 11:24:20 by alromero          #+#    #+#             */
/*   Updated: 2020/06/27 21:12:30 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void)
{
	std::cout << "Old main: \n" << std::endl;
	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	std::cout << "\nNew main: \n" << std::endl;

	IMateriaSource	*sphere = new MateriaSource();
	AMateria		*source;
	Character		*tidus = new Character("Tidus");
	Character		*cloud = new Character("Cloud");
	Character		*lightning = new Character("Lightning");

	sphere->learnMateria(new Ice());
	sphere->learnMateria(new Cure());
	cloud->equip(sphere->createMateria("artema"));
	cloud->use(0, *lightning);
	cloud->equip(sphere->createMateria("cure"));
	cloud->use(0, *lightning);
	cloud->use(1, *lightning);
	cloud->equip(sphere->createMateria("ice"));
	cloud->use(1, *lightning);
	cloud->use(0, *tidus);
	cloud->use(1, *tidus);
	cloud->use(0, *lightning);
	cloud->use(1, *lightning);
	cloud->use(0, *tidus);
	cloud->use(1, *lightning);
	cloud->use(0, *cloud);
	cloud->use(1, *lightning);
	*cloud = *tidus;
	*lightning = *tidus;
	cloud->use(0, *lightning);

	source = sphere->createMateria("ultima");
	tidus->equip(source);
	tidus->use(1, *lightning);

	delete sphere;
	delete tidus;
	delete cloud;
	delete lightning;

	return 0;
}