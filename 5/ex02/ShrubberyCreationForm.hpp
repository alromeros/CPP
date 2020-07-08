/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 11:43:41 by alromero          #+#    #+#             */
/*   Updated: 2020/07/08 13:03:36 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm: public Form
{
	private:
		std::string const	target;
		static std::string	const	trees[3];
	public:
		ShrubberyCreationForm(std::string const target);
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const &other);
		virtual ~ShrubberyCreationForm();

		void		execute(Bureaucrat const & executor) const;
};

#endif
