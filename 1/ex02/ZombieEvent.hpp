/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 18:00:40 by alromero          #+#    #+#             */
/*   Updated: 2020/04/20 15:14:23 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEVENT_HPP
# define ZOMBIEVENT_HPP

# include <iostream>
# include <string>
# include "Zombie.hpp"

class ZombieEvent
{
	public:
	std::string	type;
	void 		setZombieType(std::string type);
	Zombie		*newZombie(std::string name);
	Zombie		*randomChump(void);
};

#endif