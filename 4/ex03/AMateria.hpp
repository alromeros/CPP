/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 17:03:45 by alromero          #+#    #+#             */
/*   Updated: 2020/06/26 13:55:52 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	private:
		unsigned int	_xp;
		std::string		type;
	public:
		AMateria();
		AMateria( const AMateria& other );
		AMateria& operator=( const AMateria& other );
		virtual ~AMateria();

		AMateria(std::string const & type);
		std::string const & getType() const; 
		void				setType(std::string const type);
		unsigned int 	getXP() const;
		void			setXP(int);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif