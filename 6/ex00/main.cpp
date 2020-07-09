/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 21:42:58 by alromero          #+#    #+#             */
/*   Updated: 2020/07/09 17:47:20 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Conversor.hpp"

int		main(int argc, char **argv)
{
	Conversor *calc;
	
	if (argc != 2)
	{
		std::cout << "Invalid number or arguments" << std::endl;
		return (0);
	}
	else
	{
		calc = new Conversor(argv[1]);
		try
		{
			calc->strParser();
		}
		catch (int e)
		{
			std::cout << "Error: ";
			if (e == ERROR1)
				std::cout << "Invalid sign" << std::endl;
			else if (e == ERROR2)
				std::cout << "Invalid floating point position" << std::endl;
			else if (e == ERROR3)
				std::cout << "Invalid non-digit characters" << std::endl;
		}
	}
	delete calc;
}
