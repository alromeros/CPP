/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 18:24:14 by alromero          #+#    #+#             */
/*   Updated: 2020/06/25 19:04:49 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B()
{

}

B::B( B const &other )
{
	(void)(other);
}

B& B::operator=( B const &other )
{
	(void)(other);
	return (*this);
}

B::~B()
{

}