/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 13:01:39 by alromero          #+#    #+#             */
/*   Updated: 2020/05/27 14:26:12 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain
{
	private:
		int						iq;
	public:
		Brain(void);
		~Brain();
		std::string	identify() const;
		void	setIq(int iq);
		int		getIq(void);
};

#endif 