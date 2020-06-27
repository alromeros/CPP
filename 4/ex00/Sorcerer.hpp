/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 14:53:17 by alromero          #+#    #+#             */
/*   Updated: 2020/06/06 19:03:30 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
	private:
		std::string name;
		std::string title;
	public:
		Sorcerer();
		Sorcerer( const Sorcerer& other );
		~Sorcerer();
		Sorcerer& operator=( const Sorcerer& other);

		Sorcerer(std::string const name, const std::string title);
		void setName( std::string const name );
		std::string getName(void) const;
		void setTitle( const std::string title );
		std::string getTitle(void) const;

		void polymorph(Victim const &victima) const;
};

std::ostream& operator<<(std::ostream& out, const Sorcerer& other); 

#endif
