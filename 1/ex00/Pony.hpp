/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 14:33:28 by alromero          #+#    #+#             */
/*   Updated: 2020/05/19 13:46:53 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony
{
	private:
		int			tailLenght;
		std::string colour;
		int			healthLevel;
		std::string	ponyName;
	public:
					Pony(void);
					~Pony(void);
		void		setTailLenght(int lenght);
		void		setColour(std::string rgb);
		void		setHealthLevel(int health);
		void		setPonyName(std::string name);
		int			getTailLenght(void);
		std::string	getColour(void);
		int			getHealthLevel(void);
		std::string	getPonyName(void);
};

# endif