/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 18:24:44 by alromero          #+#    #+#             */
/*   Updated: 2020/07/09 20:27:55 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"
#include <iostream>

int main()
{
	srand(time(NULL));
	
	std::cout << "-----[FIRST TEST]-----\n" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::srand(rand() % (15324 * (i + 1)));
		Base *uwu = generate();
		std::cout << "Identify random " << i << " from pointer: ";
		identify_from_pointer(uwu);
		delete uwu;
	}

	std::cout << "\n-----[SECOND TEST]-----\n" << std::endl;

	for (int i = 0; i < 5; i++)
	{
		std::srand(rand() % (15324 * (i + 1)));
		Base *uwu = generate();
		std::cout << "Identify random " << i << " from reference: ";
		identify_from_reference(*uwu);
		delete uwu;
	}

	std::cout << "\n-----[THIRD TEST]-----\n" << std::endl;

	A *a = new A;
	B *b = new B;
	C *c = new C;
	
	std::cout << "Identify A from pointer: ";
	identify_from_pointer(a);
	std::cout << "Identify B from pointer: ";
	identify_from_pointer(b);
	std::cout << "Identify C from pointer: ";
	identify_from_pointer(c);
	delete a;
	delete b;
	delete c;

	std::cout << "\n-----[FOURTH TEST]-----\n" << std::endl;

	A aa;
	B bb;
	C cc;

	std::cout << "Identify A from reference: ";
	identify_from_reference(aa);
	std::cout << "Identify B from reference: ";
	identify_from_reference(bb);
	std::cout << "Identify C from reference: ";	
	identify_from_reference(cc);
	return (0);
}
