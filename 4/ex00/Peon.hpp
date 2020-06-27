/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 16:32:50 by alromero          #+#    #+#             */
/*   Updated: 2020/06/06 19:35:01 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon: public virtual Victim
{
	public:
		Peon();
		Peon(const Peon& other);
		~Peon();
		Peon& operator=(const Peon& other);
		Peon(std::string const name);

		void getPolymorphed()const;
};

#endif