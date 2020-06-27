/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 16:09:07 by alromero          #+#    #+#             */
/*   Updated: 2020/06/06 19:35:21 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim
{
	private:
		std::string name;
	public:
		Victim();
		Victim( const Victim& other );
		~Victim();
		Victim& operator=( const Victim& other);

		Victim(std::string const name);
		void setName( std::string const name );
		std::string getName(void) const;

		virtual void getPolymorphed() const;
};

std::ostream& operator<<(std::ostream& out, const Victim& other);

#endif