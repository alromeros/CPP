/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 18:00:31 by alromero          #+#    #+#             */
/*   Updated: 2020/04/20 18:57:00 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
}
