/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 17:04:12 by alromero          #+#    #+#             */
/*   Updated: 2020/10/15 00:25:06 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Program.hpp"

int main(int argc, char const **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: Bad arguments!" << std::endl;
	}
	else
	{
		Program program;
		if (!program.loadFromFile(argv[1]))
			std::cerr << "Error: Bad program!" << std::endl;
		else
		{
			std::cout << "####################\n" 
						 "## Program starts  #\n"
						 "####################\n" << std::endl;
			program.execute();
			std::cout << "\n\n####################\n" 
						 "##   Program ends  #\n"
						 "####################" << std::endl;
		}
	}
	return (0);
}
