/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 17:56:31 by alromero          #+#    #+#             */
/*   Updated: 2020/06/25 16:10:59 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>

void * serialize(void);

struct Data 
{ 
	std::string s1;
	int 		n;
	std::string s2;
};

Data * deserialize(void * raw);

#endif