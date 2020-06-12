/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 17:11:02 by alromero          #+#    #+#             */
/*   Updated: 2020/06/11 13:41:23 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	FragTrap frag("Kanye");
	ScavTrap scav("100gecs");
	NinjaTrap ninja("Cigarro");
	frag.vaulthunter_dot_exe("100gecs");
	scav.challengeNewcomer();
	frag.vaulthunter_dot_exe("100gecs");
	frag.vaulthunter_dot_exe("Cigarro");
	frag.vaulthunter_dot_exe("100gecs");
	frag.vaulthunter_dot_exe("Cigarro");
	frag.beRepaired(200);
	frag.takeDamage(106);
	scav.challengeNewcomer();
	scav.meleeAttack("Kanye");
	scav.rangedAttack("Kanye");
	scav.takeDamage(1);
	scav.beRepaired(500);
	scav.takeDamage(103);
	ninja.ninjaShoebox(frag);
	ninja.ninjaShoebox(scav);
	ninja.takeDamage(56);
	ninja.meleeAttack("Kanye");
	ninja.takeDamage(100);

	return (0);
}