/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 10:29:03 by alromero          #+#    #+#             */
/*   Updated: 2020/08/10 18:05:27 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
	std::cout << _GREEN"\n-----[Main del subject]-----\n" _WHITE << std::endl;
	MutantStack<int>    mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	for (int i = 0; i < 10; i++)
		mstack.push(i);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while(it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << _GREEN"\n-----[Main propio]-----\n" _WHITE << std::endl;

	std::list<int>   lista;
	lista.push_back(5);
	lista.push_back(17);
	std::cout << lista.back() << std::endl;
	lista.pop_back();
	std::cout << lista.size() << std::endl;
	lista.push_back(3);
	lista.push_back(5);
	lista.push_back(737);
	for (int i = 0; i < 10; i++)
		lista.push_back(i);	
	lista.push_back(0);
	std::list<int>::iterator it2 = lista.begin();
	std::list<int>::iterator ite2 = lista.end();
	++it2;
	--it2;
	while(it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::list<int> s2(lista);

	return 0;
}