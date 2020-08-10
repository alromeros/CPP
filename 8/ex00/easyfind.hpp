/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 20:38:36 by alromero          #+#    #+#             */
/*   Updated: 2020/07/26 11:26:58 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <deque>
#include <set>
#include <list>
#include <map>
#include <vector>
#include <algorithm> 
#include <typeinfo>

template <typename T> int easyfind(T &cont, int n)
{	
	typename T::iterator i = cont.begin();
	typename T::iterator j = cont.end();
	typename T::iterator fnd = std::find(i, j, n);
	if (fnd == j)
		throw (std::exception());
	else
		return (*fnd);
}

#endif
