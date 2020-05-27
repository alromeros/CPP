/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 15:02:21 by alromero          #+#    #+#             */
/*   Updated: 2020/05/27 14:33:32 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

replace::replace()
{
}

replace::~replace()
{
}

std::string	replace::newFilename(std::string filename)
{
	std::string 	temp;
	unsigned long	i;

	if (filename.find_last_of('/'))
		i = filename.find_last_of('/');
	else
		i = 0;
	while (i < filename.length())
	{
		filename[i] = toupper(filename[i]);
		i++;
	}
	temp.append(filename);
	temp.append(".replace");
	return (temp);
}

void	replace::ft_replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	file;
	std::ofstream	fileDos;
	std::string		temp;
	size_t			pos;
	
	if (!filename.length())
		throw ("Empty filename");
	else if (!s1.length() || !s2.length())
		throw ("Empty string");
	else
	{
		file.open(filename, std::ios::in);
		if (file.is_open())
		{
			fileDos.open(replace::newFilename(filename), std::ios::out | std::ios::trunc);
			if (fileDos.is_open())
			{
				while (std::getline(file, temp))
		    	{
					while (((pos = temp.find(s1)) != std::string::npos) && (s1.compare(s2) != 0))
					{
						temp.erase(pos, s1.length());
						temp.insert(pos, s2);
					}
		      		fileDos << temp;
					if (!file.eof())
						fileDos << "\n";
		    	}
				if (file.bad())
					throw ("Bad file");
			}
			else
				throw ("Unable to open output file");
		}
		else
			throw ("Unable to open input file");
		file.close();
		fileDos.close();
	}
}
