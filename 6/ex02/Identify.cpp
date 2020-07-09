/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 19:00:11 by alromero          #+#    #+#             */
/*   Updated: 2020/06/25 19:24:01 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

Base * generate(void)
{	
	int i = rand() % 3;
	if (i == 0)
	{
		A *a = new A;
		return (a);
	}
	else if (i == 1)
	{
		B *b = new B;
		return (b);
	}
	else
	{
		C *c = new C;
		return (c);
	}
}

void identify_from_pointer(Base * p)
{
	if (A* check = dynamic_cast<A*> (p))
		std::cout << "A" << std::endl;
	else if (B* check = dynamic_cast<B*> (p))
		std::cout << "B" << std::endl;
	else if (C* check = dynamic_cast<C*> (p))
		std::cout << "C" << std::endl;
}

void identify_from_reference( Base & p)
{
	if (A* check = dynamic_cast<A*> (&p))
		std::cout << "A" << std::endl;
	else if (B* check = dynamic_cast<B*> (&p))
		std::cout << "B" << std::endl;
	else if (C* check = dynamic_cast<C*> (&p))
		std::cout << "C" << std::endl;
}
