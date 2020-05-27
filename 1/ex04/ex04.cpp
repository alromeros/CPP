/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 19:54:49 by alromero          #+#    #+#             */
/*   Updated: 2020/05/21 16:54:36 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

int main()
{
	std::string brain;
	brain = "HI THIS IS BRAIN";
	std::string	*brain_pointer = &brain;
	std::string	&brain_reference = brain;
	std::cout << std::setw(13) << "String: " << brain << std::endl;
	std::cout << std::setw(13) << "Pointer: " << *brain_pointer << std::endl;
	std::cout << std::setw(13) << "Reference: " << brain_reference << std::endl;
	return (0);
}
