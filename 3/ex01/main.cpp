/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 17:11:02 by alromero          #+#    #+#             */
/*   Updated: 2020/06/11 13:41:31 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	FragTrap frag("");
	ScavTrap scav;
	
	frag.vaulthunter_dot_exe("Handsome Jack");
	frag.meleeAttack("Handsome Jack");
	frag.rangedAttack("Handsome Jack");
	scav.takeDamage(240);
	scav.challengeNewcomer();
	frag.takeDamage(240);
	frag.beRepaired(50);
	frag.vaulthunter_dot_exe("Handsome Jack");
	scav.challengeNewcomer();
	frag.takeDamage(90);
	FragTrap claptrap = frag;
	claptrap.vaulthunter_dot_exe("Handsome Jack");
	claptrap.beRepaired(50);
	claptrap.vaulthunter_dot_exe("Handsome Jack");

	return (0);
}