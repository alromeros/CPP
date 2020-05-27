/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 13:11:38 by alromero          #+#    #+#             */
/*   Updated: 2020/05/21 16:53:00 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Human
{
	private:
		const Brain	brain;
	public:
		const Brain	&getBrain(void);
		const std::string identify(void);
};

#endif