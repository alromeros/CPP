/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 13:29:08 by alromero          #+#    #+#             */
/*   Updated: 2020/06/29 18:24:13 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{
	public:
		virtual ~AssaultTerminator();
		AssaultTerminator();
		AssaultTerminator( const AssaultTerminator &other );
		AssaultTerminator& operator=( const AssaultTerminator &other );
		
		ISpaceMarine* clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;	
};

#endif