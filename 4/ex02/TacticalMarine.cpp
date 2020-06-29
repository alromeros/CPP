/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 13:33:12 by alromero          #+#    #+#             */
/*   Updated: 2020/06/29 18:58:28 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine( const TacticalMarine& copy )
{
	(void)copy;
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

ISpaceMarine* TacticalMarine::clone() const
{
	TacticalMarine *copy = new TacticalMarine(*this);
	return (copy);
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

TacticalMarine& TacticalMarine::operator=( const TacticalMarine& copy )
{
	(void)copy;
	return (*this);
}
