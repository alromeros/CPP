/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 17:55:53 by alromero          #+#    #+#             */
/*   Updated: 2020/04/14 17:58:37 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void memoryLeak()
{
	std::string *panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}
