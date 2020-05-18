/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 18:00:31 by alromero          #+#    #+#             */
/*   Updated: 2020/04/20 15:17:25 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void Zombie::announce()
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
}
