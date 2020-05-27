/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 18:00:40 by alromero          #+#    #+#             */
/*   Updated: 2020/05/19 14:34:38 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEVENT_HPP
# define ZOMBIEVENT_HPP

# include <iostream>
# include <string>
# include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string	type;
	public:
		void 		setZombieType(std::string type);
		std::string	getType(void);
		Zombie		*newZombie(std::string name);
		Zombie		*randomChump(void);
};

#endif