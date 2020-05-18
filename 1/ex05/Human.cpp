/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 13:15:14 by alromero          #+#    #+#             */
/*   Updated: 2020/04/22 20:38:54 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Human.hpp"

const Brain &Human::getBrain(void)
{
	return (this->brain);
}

const std::string Human::identify(void)
{
	return (this->brain.identify());
}
