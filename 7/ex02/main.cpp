/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 10:38:49 by alromero          #+#    #+#             */
/*   Updated: 2020/07/12 14:34:55 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int		main()
{
	srand(time(NULL));
	
	Array<int> 			*prueba = new Array<int>(5);
	Array<std::string> 	*pruebaStr = new Array<std::string>(5);
	Array<int *> 		*pruebaIntPtr = new Array<int *>(5);
	Array<Array<int>> 	*pruebaArray = new Array<Array<int>>(5);

	std::cout << "\n-----[TEST 1: INT]-----\n" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		(*prueba)[i] = i + (rand() % 237);
		std::cout << "El valor del array en " << i << " es: " << (*prueba)[i] << std::endl;
	}

	std::cout << "\n-----[TEST 2: STR]-----\n" << std::endl;

	for (int i = 0; i < 5; i++)
	{
		(((*pruebaStr)[i])).resize(7);
		for (int j = 0; j < 7; j++)
			(((*pruebaStr)[i]))[j] = (rand() % 94 + 33);
		std::cout << "El valor del array en " << i << " es: " << (*pruebaStr)[i] << std::endl;
	}

	std::cout << "\n-----[TEST 3: INT*]-----\n" << std::endl;

	for (int i = 0; i < 5; i++)
	{
		int b = i + (rand() % 237);
		(*pruebaIntPtr)[i] = (&b);
		std::cout << "El valor del array en " << i << " es: " << (*pruebaIntPtr)[i] << std::endl;
	}

	std::cout << "\n-----[TEST 4: ARRAY]-----\n" << std::endl;

	Array<int> *test = new Array<int>[5];

	for (int i = 0; i < 5; i++)
	{
		(*pruebaArray)[i] = test[i];
		std::cout << "En " << i << " es:\n\n" << &((*pruebaArray)[i]) << "\n" << std::endl;
	}

	delete[] test;

	(*pruebaArray)[0] = *prueba;
	std::cout << "Prueba con un array lleno:\n\n" << ((*pruebaArray)[0]) << std::endl;

	std::cout << "-----[TEST 5: EXCEPTION]-----\n" << std::endl;
	try
	{
		int a = (*prueba)[8];
		a++;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() <<  "\n" << std::endl;
	}
	
	delete prueba;
	delete pruebaStr;
	delete pruebaArray;
	delete pruebaIntPtr;
	
	return (0);
}
