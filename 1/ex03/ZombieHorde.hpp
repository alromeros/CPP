/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 18:27:53 by alromero          #+#    #+#             */
/*   Updated: 2020/05/21 13:43:31 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <iostream>

class ZombieHorde
{
	private:
		int n;
		Zombie *horde;
	public:
		ZombieHorde(int n);
		void announce();
		~ZombieHorde();
		void	setN(int n);
		void	setHorde(Zombie *horde);
		int		getN(void);
		Zombie	*getHorde(void);
};

#endif