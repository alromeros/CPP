/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 20:42:46 by alromero          #+#    #+#             */
/*   Updated: 2020/07/09 18:54:41 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

void	randomGenerator(char *rnd)
{
   	static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < 8; ++i)
        rnd[i] = alphanum[rand() % 62];
	rnd[8] = '\0';
}

void * serialize(void)
{
	int		n;
	char	*rand1 = new char[8];
	char	*rand2 = new char[8];

	std::srand(rand() % 23445);
	randomGenerator(rand1);
	randomGenerator(rand2);
	n = std::rand();

	/*std::cout << "Unserialized s1: " << rand1 << std::endl;
	std::cout << "Unserialized n: " << n << std::endl;
	std::cout << "Unserialized s2: " << rand2 << std::endl;*/
	
	char *bytes = new char[20];
	for (int i = 0; i < 8; i++)
		bytes[i] = rand1[i];
	bytes[11] = ((n >> 24) & 0xFF);
	bytes[10] = ((n >> 16) & 0xFF);
	bytes[9] = ((n >> 8) & 0xFF);
	bytes[8] = ((n) & 0xFF);
	int a = 0;
	for (int i = 12; i < 20; i++)
		bytes[i] = rand2[a++];
	delete[] rand1;
	delete[] rand2;
	return ((void *)bytes);
}

Data * deserialize(void * raw)
{
	Data *serial = new Data;

	serial->s1.resize(8);
	serial->s2.resize(8);
	for (int i = 0; i < 8; i++)
		serial->s1[i] = ((char *)raw)[i];
 	serial->n = *reinterpret_cast<unsigned int*>(static_cast<char*>(raw) + 8);
	int a = 0;
	for (int i = 12; i < 20; i++)
		serial->s2[a++] = ((char *)raw)[i];
	return (serial);
}
