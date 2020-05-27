/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 18:00:34 by alromero          #+#    #+#             */
/*   Updated: 2020/05/19 15:11:15 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string type;
		std::string name;
	public:
		Zombie();
		Zombie(std::string type, std::string name);
		~Zombie();
		void 		announce();
		void		setType(std::string type);
		void 		setName(std::string name);
		std::string getType(void);
		std::string getName(void);
};

# endif
