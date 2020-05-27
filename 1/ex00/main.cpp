/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 14:32:38 by alromero          #+#    #+#             */
/*   Updated: 2020/05/19 13:46:49 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony *horsie = new Pony;
	horsie->setColour("black");
	horsie->setPonyName("Dingus");
	horsie->setTailLenght(20);
	horsie->setHealthLevel(10);
	delete horsie;
}

void	ponyOnTheStack(void)
{
	Pony horsie;
	horsie.setColour("yellow");
	horsie.setPonyName("Custard");
	horsie.setTailLenght(5);
	horsie.setHealthLevel(20);
}

int		main()
{
	std::cout << "On the Heap:" << std::endl;
	ponyOnTheHeap();
	std::cout << "On the Stack:" << std::endl;
	ponyOnTheStack();
}
