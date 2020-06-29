/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 18:04:13 by alromero          #+#    #+#             */
/*   Updated: 2020/06/29 18:25:27 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure( const Cure& other );
		Cure& operator=( const Cure& other );
		virtual ~Cure();

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif