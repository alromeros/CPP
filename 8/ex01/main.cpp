/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:54:36 by alromero          #+#    #+#             */
/*   Updated: 2020/08/10 17:25:28 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	std::cout << _PURPLE "\n-----[Main del subject]-----\n" _WHITE << std::endl;
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << _PURPLE "\n-----[Main propio]-----\n" _WHITE << std::endl;

	std::srand(time(NULL));

	sp = Span(10000);

	for (int i = 0; i < 10000; i++)
	{
		sp.addNumber(std::rand());
	}

	std::cout << _GREEN "1. Prueba con 10000 números aleatorios\n" _WHITE << std::endl;
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << "\n" << std::endl;

	std::cout << _GREEN "2. Prueba añadiendo un rango desde otro vector\n" _WHITE << std::endl;

	Span sp2 = Span(1000);
	std::vector<int> vector;


	for (int i = 0; i < 1000; i++)
	{
		vector.push_back(std::rand());
	}

	sp2.addNumber(vector.begin(), vector.end());

	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << "\n" << std::endl;

	std::cout << _GREEN << "3. Prueba de excepciones\n" _WHITE << std::endl;
	Span sp3 = Span(16);

	try
	{
		sp3.addNumber(sp2.getStorage().begin(), sp2.getStorage().begin() + 10);
	}
	catch (std::exception &e)
	{
		std::cout << _RED"not range enough!" _WHITE << std::endl;
	}

	for (int i = 0; i < 20; i++)
	{
		try
		{
			sp3.addNumber(i);
			std::cout << i << _GREEN" was added" _WHITE << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << _RED"not range enough!" _WHITE << std::endl;
			std::cout << _RED"can't push " _WHITE << i << std::endl;
		}
	}

	return 0;
}
