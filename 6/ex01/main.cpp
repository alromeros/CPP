/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 17:43:27 by alromero          #+#    #+#             */
/*   Updated: 2020/07/09 18:54:53 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serialize.hpp"

int main()
{
	srand(time(NULL));
	void *pointer;
	Data *uwu;

	std::cout << "\n-----[DESERIALIZATION 1]-----\n" << std::endl;
	
	pointer = serialize();
	uwu = deserialize(pointer);
	std::cout << "\nDeserialized s1: " << uwu->s1 << std::endl;
	std::cout << "Deserialized n: " << uwu->n << std::endl;
	std::cout << "Deserialized s2: " << uwu->s2 << std::endl;
	
	delete[] ((char *)pointer);
	delete (uwu);
	
	std::cout << "\n-----[DESERIALIZATION 2]-----\n" << std::endl;
	
	pointer = serialize();
	uwu = deserialize(pointer);
	std::cout << "\nDeserialized s1: " << uwu->s1 << std::endl;
	std::cout << "Deserialized n: " << uwu->n << std::endl;
	std::cout << "Deserialized s2: " << uwu->s2 << std::endl;
	
	delete[] ((char *)pointer);
	delete (uwu);

	std::cout << "\n-----[DESERIALIZATION 3]-----\n" << std::endl;

	pointer = serialize();
	uwu = deserialize(pointer);
	std::cout << "\nDeserialized s1: " << uwu->s1 << std::endl;
	std::cout << "Deserialized n: " << uwu->n << std::endl;
	std::cout << "Deserialized s2: " << uwu->s2 << std::endl;
	
	delete[] ((char *)pointer);
	delete (uwu);
	
	return (0);
}