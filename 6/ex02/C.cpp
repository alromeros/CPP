/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 18:24:24 by alromero          #+#    #+#             */
/*   Updated: 2020/06/25 19:04:01 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C()
{

}

C::C( C const &other )
{
	(void)(other);
}

C& C::operator=( C const &other )
{
	(void)(other);
	return (*this);
}

C::~C()
{

}