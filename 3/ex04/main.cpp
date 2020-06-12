/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 17:11:02 by alromero          #+#    #+#             */
/*   Updated: 2020/06/12 18:39:55 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "SuperTrap.hpp"

int	main()
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
	SuperTrap super("Sophie");
	super.ninjaShoebox(frag);
	super.ninjaShoebox(scav);
	super.ninjaShoebox(ninja);
	super.vaulthunter_dot_exe("Kanye");
	super.takeDamage(80);
	
	return (0);
}
