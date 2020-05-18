/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 14:33:28 by alromero          #+#    #+#             */
/*   Updated: 2020/04/14 17:39:23 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony
{
	public:
	int			tail_lenght;
	std::string colour;
	int			health_level;
	std::string	pony_name;
	Pony(void);
};

# endif