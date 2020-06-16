/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 17:21:57 by alromero          #+#    #+#             */
/*   Updated: 2020/06/16 11:10:31 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int main(void)
{
	FragTrap frag("Kanye");

	frag.vaulthunter_dot_exe("Handsome Jack");
	frag.meleeAttack("Handsome Jack");
	frag.rangedAttack("Handsome Jack");
	frag.takeDamage(240);
	frag.vaulthunter_dot_exe("Handsome Jack");
	frag.takeDamage(240);
	frag.beRepaired(50);
	frag.vaulthunter_dot_exe("Handsome Jack");
	frag.vaulthunter_dot_exe("Handsome Jack");
	frag.takeDamage(90);
	FragTrap claptrap = frag;
	claptrap.vaulthunter_dot_exe("Handsome Jack");
	claptrap.beRepaired(50);
	claptrap.vaulthunter_dot_exe("Handsome Jack");
	return (0);
}