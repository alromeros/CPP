/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   telephone.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 19:09:57 by alromero          #+#    #+#             */
/*   Updated: 2020/04/14 00:19:29 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TELEPHONE_HPP
# define TELEPHONE_HPP

# include <iostream>
# include <string>
# include <iomanip>

class telephone 
{
	public:
	std::string	postal_address;
	std::string	email_address;
	std::string	phone_number;
	std::string	birthday_date;
	std::string	favourite_meal;
	std::string	underwear_color;
	std::string	darkest_secret;
	std::string login;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	int			index;
};

#endif
