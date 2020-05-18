/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 18:27:53 by alromero          #+#    #+#             */
/*   Updated: 2020/04/20 18:58:51 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <iostream>

class ZombieHorde
{
	public:
	ZombieHorde(int n);
	int n;
	void announce();
	Zombie *horde;
	~ZombieHorde();
};

#endif