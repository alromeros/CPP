/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 14:32:38 by alromero          #+#    #+#             */
/*   Updated: 2020/04/14 17:54:53 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony *horsie = new Pony;
	horsie->colour = "black";
	horsie->pony_name = "n-word";
	horsie->tail_lenght = 20;
	horsie->health_level = 10;
	delete horsie;
}

void	ponyOnTheStack(void)
{
	Pony horsie;
	horsie.colour = "yellow";
	horsie.pony_name = "Heavenly Custard";
	horsie.tail_lenght = 5;
	horsie.health_level = 20;
}

int		main()
{
	std::cout << "On the Heap:" << std::endl;
	ponyOnTheHeap();
	std::cout << "On the Stack:" << std::endl;
	ponyOnTheStack();
}
