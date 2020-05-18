/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 18:56:06 by alromero          #+#    #+#             */
/*   Updated: 2020/05/18 13:46:41 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "telephone.hpp"
#include <string>
#include <iomanip>

void		put_str_resizer(std::string str)
{
	size_t		len;
	std::string str2;

	str2 = str;
	len = str.size();
	if (len > 10)
	{
		str2.resize(9);
		str2.resize(10, '.');
	}
	std::cout << std::setw(10) << str2 << "|";
}

void		prompter(telephone contacto)
{
	std::cout << "|" << std::setw(10) << contacto.index << "|";
	put_str_resizer(contacto.first_name);
	put_str_resizer(contacto.last_name);
	put_str_resizer(contacto.nickname);
	std::cout << std::endl;
}

void		prompter_two(telephone contacto)
{
	std::cout << contacto.first_name << std::endl;
	std::cout << contacto.last_name << std::endl;
	std::cout << contacto.nickname << std::endl;
	std::cout << contacto.login << std::endl;
	std::cout << contacto.postal_address << std::endl;
	std::cout << contacto.email_address << std::endl;
	std::cout << contacto.phone_number << std::endl;
	std::cout << contacto.birthday_date << std::endl;
	std::cout << contacto.favourite_meal << std::endl;
	std::cout << contacto.underwear_color << std::endl;
	std::cout << contacto.darkest_secret << std::endl;
}

int main()
{
	int 		i;
	int 		flag;
	int 		index;
	std::string	command;
	telephone	contacto[8];

	i = 0;
	index = 0;
	flag = 0;
	while (command.compare("EXIT") != 0)
	{
		std::cout << "Introduce un comando (ADD) (EXIT) (SEARCH)" << std::endl;
		std::cout << "> ";
		std::getline(std::cin, command);
		if (command.compare("ADD") == 0)
		{
			if (i == 8)
			{
				std::cout << "There's no memory left, if you proceed, further contacts will be overwritten" << std::endl;
				i = 0;
				flag = 1;
			}
			std::cout << "Enter the first name:" << std::endl;
			std::getline(std::cin, contacto[i].first_name);
			std::cout << "Enter the last name:" << std::endl;
			std::getline(std::cin, contacto[i].last_name);
			std::cout << "Enter nickname:" << std::endl;
			std::getline(std::cin, contacto[i].nickname);
			std::cout << "Enter login:" << std::endl;
			std::getline(std::cin, contacto[i].login);
			std::cout << "Enter postal address" << std::endl;
			std::getline(std::cin, contacto[i].postal_address);
			std::cout << "Enter email address:" << std::endl;
			std::getline(std::cin, contacto[i].email_address);
			std::cout << "Enter phone number:" << std::endl;
			std::getline(std::cin, contacto[i].phone_number);
			std::cout << "Enter birthday date:" << std::endl;
			std::getline(std::cin, contacto[i].birthday_date);
			std::cout << "Enter favourite meal:" << std::endl;
			std::getline(std::cin, contacto[i].favourite_meal);
			std::cout << "Enter underwear color:" << std::endl;
			std::getline(std::cin, contacto[i].underwear_color);
			std::cout << "Enter... darkest secret:" << std::endl;
			std::getline(std::cin, contacto[i].darkest_secret);
			contacto[i].index = i + 1;
			i++;
		}
		else if ((command.compare("SEARCH") == 0 && i != 0))
		{
			std::cout << "|-------------------------------------------|" << std::endl;
			std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
			std::cout << "|-------------------------------------------|" << std::endl;
			if (flag == 0)
				for (int j = 0; j < i; j++)
					prompter(contacto[j]);
			else
				for (int j = 0; j < 8; j++)
					prompter(contacto[j]);
			std::cout << "Enter the index: " << std::endl;
			std::cin >> index;
			std::cin.ignore(10, '\n');
			if ((index > 0 && index <= 8) && (index <= (i + 1) || flag))
				prompter_two(contacto[index - 1]);
			else
				std::cout << "index not valid" << std::endl;
		}
		else if (command.compare("EXIT") != 0)
			std::cout << "Please, introduce a valid command!" << std::endl;
	}
}
