/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 17:21:57 by alromero          #+#    #+#             */
/*   Updated: 2020/05/15 17:25:07 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int main(void)
{
	FragTrap frag("FR4G");

	//srand(time(NULL));
	//frag.vaulthunter_dot_exe("CL4P-TP");
	frag.meleeAttack("CL4P-TP");
	frag.rangedAttack("CL4P-TP");
	/*frag.takeDamage(24);
	frag.beRepaired(50);
	frag.takeDamage(42);
	frag.takeDamage(100);
	frag.beRepaired(125);*/
	/*frag.vaulthunter_dot_exe("CL4P-TP");
	frag.vaulthunter_dot_exe("CL4P-TP");
	frag.vaulthunter_dot_exe("CL4P-TP");
	frag.vaulthunter_dot_exe("CL4P-TP");*/
	return (0);
}