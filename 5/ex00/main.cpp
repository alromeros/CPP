/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:31:40 by alromero          #+#    #+#             */
/*   Updated: 2020/07/08 10:41:19 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	Bureaucrat	*k = new Bureaucrat("K", 149);
	try
	{
		Bureaucrat	gregor("Gregor", 200);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		std::cout << *k;
		k->gradeDecrement();
		k->gradeDecrement();
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << *k;
	k->setGrade(2);
	try
	{
		k->gradeIncrement();
		k->gradeIncrement();
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	delete k;
}