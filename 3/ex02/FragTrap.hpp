/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 15:07:01 by alromero          #+#    #+#             */
/*   Updated: 2020/06/15 12:56:24 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <ctime>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{		
	public:
		FragTrap();
		FragTrap(std::string const &str);
		FragTrap( const FragTrap &f );
		FragTrap &operator =(const FragTrap &f);
		~FragTrap();

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void	vaulthunter_dot_exe(std::string const & target);
};

#endif