/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 19:11:49 by alromero          #+#    #+#             */
/*   Updated: 2020/05/25 19:33:46 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

class replace
{
	private:
		static std::string	newFilename(std::string filename);
	public:
		replace();
		~replace();
		static void			ft_replace(std::string filename, std::string s1, std::string s2);
};

#endif