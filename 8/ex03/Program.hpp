/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Program.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:25:15 by alromero          #+#    #+#             */
/*   Updated: 2020/10/14 18:25:20 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROGRAM_HPP
# define PROGRAM_HPP

# include <sstream>
# include <iostream>
# include <fstream>
# include <string>
# include <array>
# include <deque>
# include "Action.hpp"

class Program
{
	private:
		std::string moriginal;
		Action program;
	public:
		Program();
		Program(Program const &other);
		virtual ~Program();

		Program &operator=(Program const &other);

		bool loadFromString(std::string const &str);
		bool loadFromFile(std::string const &filename);

		void execute(void);
};

#endif
