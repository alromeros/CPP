/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 18:22:45 by alromero          #+#    #+#             */
/*   Updated: 2020/06/25 19:05:14 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A()
{

}

A::A( A const &other )
{
	(void)(other);
}

A& A::operator=( A const &other )
{
	(void)(other);
	return (*this);
}

A::~A()
{

}