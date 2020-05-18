/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 12:23:28 by alromero          #+#    #+#             */
/*   Updated: 2020/04/23 15:05:31 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType() const
{
	return(this->type);
}

void	Weapon::setType(const std::string &type)
{
	this->type = type;
}

Weapon::Weapon(std::string const &type)
{
	this->type = type;
}

Weapon::Weapon()
{	
}
