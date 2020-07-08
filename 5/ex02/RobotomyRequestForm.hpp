/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 11:54:45 by alromero          #+#    #+#             */
/*   Updated: 2020/07/08 13:03:51 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	private:
		std::string const	target;
	public:
		RobotomyRequestForm(std::string const target);
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& other);
		RobotomyRequestForm& operator=(RobotomyRequestForm const &other);
		virtual ~RobotomyRequestForm();

		void		execute(Bureaucrat const & executor) const;
};

#endif