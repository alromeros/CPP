/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 13:06:17 by alromero          #+#    #+#             */
/*   Updated: 2020/06/18 13:16:20 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include <iostream>
#include "ISquad.hpp"

class Squad: public ISquad
{
	private:
		int 			count;
		ISpaceMarine 	**unit;
	public:
		Squad();
		Squad( Squad const &other );
		~Squad();
		Squad& 			operator=(Squad const &other );
		
		int				getCount() const;
		ISpaceMarine*	getUnit(int) const;
		int				push(ISpaceMarine*);
};

#endif
