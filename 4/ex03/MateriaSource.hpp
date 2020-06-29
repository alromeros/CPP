/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 11:26:33 by alromero          #+#    #+#             */
/*   Updated: 2020/06/29 18:37:33 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria **slot;
	public:
		virtual ~MateriaSource();
		MateriaSource();
		MateriaSource( MateriaSource const &other );
		MateriaSource& operator=( MateriaSource const &other );
		
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);	
};

#endif
