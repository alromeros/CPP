/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 13:06:28 by alromero          #+#    #+#             */
/*   Updated: 2020/05/21 16:50:52 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string Brain::identify() const
{
	int i;

	i = 2;
	std::stringstream address;
	address << (void const *)this;
	std::string name = address.str();
	while (name[i])
	{
		if (name[i] <= 'z' && name[i] >= 'a')
			name[i] -= 32;
		i++;
	}
	return (name);
}

Brain::Brain(void) 
{
	
}
