/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 18:03:24 by alromero          #+#    #+#             */
/*   Updated: 2020/06/29 18:25:33 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice( const Ice& other );
		Ice& operator=( const Ice& other );
		virtual ~Ice();

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif