/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 10:35:51 by alromero          #+#    #+#             */
/*   Updated: 2020/07/16 14:56:00 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <deque>
#include <map>
#include <set>
#include <list>
#include <vector>

int main(void)
{
	std::cout << "\n-----[TEST 1: VECTOR]-----\n" << std::endl;

	std::vector<int> vect;
	vect.resize(20);
	for (int i = 0; i < 20; i++)
		vect[i] = i;
	for (int i = 0; i < 34; i++)
	{
		try
		{
			std::cout << "El valor " << easyfind(vect, i) << " se encuentra dentro del contenedor!" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << i << " no se encuentra dentro del contenedor!" << std::endl;
		}
	}
	
	std::cout << "\n-----[TEST 2: DEQUE]-----\n" << std::endl;

	std::deque<int> deq;
	deq.resize(20);
	for (int i = 0; i < 20; i++)
		deq[i] = i;
	for (int i = 0; i < 34; i++)
	{
		try
		{
			std::cout << "El valor " << easyfind(deq, i) << " se encuentra dentro del contenedor!" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << i << " no se encuentra dentro del contenedor!" << std::endl;
		}
	}

	std::cout << "\n-----[TEST 3: LIST]-----\n" << std::endl;

	std::list<int> lst;
	lst.assign(35, 1);
	std::list<int>::iterator q = lst.begin();
	for (int i = 0; i < 35; i++)
		lst.insert(q++, i);
	for (int i = 0; i < 35; i++)
	{
		try
		{
			std::cout << "El valor " << easyfind(lst, i) << " se encuentra dentro del contenedor!" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << i << " no se encuentra dentro del contenedor!" << std::endl;
		}
	}

	std::cout << "\n-----[TEST 4: SET]-----\n" << std::endl;

	std::set<int> st;
	std::cout << "Max size es: " << st.max_size() << std::endl;
	for (int i = 0; i < 20; i++)
		st.insert(i);
	for (int i = 0; i < 34; i++)
	{
		try
		{
			std::cout << "El valor " << easyfind(st, i) << " se encuentra dentro del contenedor!" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << i << " no se encuentra dentro del contenedor!" << std::endl;
		}
	}

	std::cout << "\n-----[TEST 5: MAP]-----\n" << std::endl;

	std::map<int, int> mp;
	std::cout << "Max size es: " << st.max_size() << std::endl;
	for (int i = 0; i < 20; i++)
		st.insert(i);
	for (int i = 0; i < 34; i++)
	{
		try
		{
			std::cout << "El valor " << easyfind(st, i) << " se encuentra dentro del contenedor!" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << i << " no se encuentra dentro del contenedor!" << std::endl;
		}
	}
}
