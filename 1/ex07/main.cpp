/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 19:06:08 by alromero          #+#    #+#             */
/*   Updated: 2020/05/25 20:09:57 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int		main(int argc, char **argv)
{
	std::string filename;
	std::string s1;
	std::string s2;

	if (argc != 4)
		std::cout << "Wrong parameters!" << std::endl;
	else if (argc == 4)
	{
		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		try
		{
			replace::ft_replace(filename, s1, s2);
		}
		catch (char const *handler)
		{
			std::cout << "Error: " << handler << std::endl;
		}
	}
	return (0);
}
