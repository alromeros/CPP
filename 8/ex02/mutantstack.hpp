/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 11:58:45 by alromero          #+#    #+#             */
/*   Updated: 2020/08/10 17:41:22 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <typeinfo>
#include <deque>
#include <list>
# define _GREEN		"\x1b[32m"
# define _WHITE		"\x1b[37m"
# define _PURPLE	"\x1b[35m"
# define _RED		"\x1b[31m"

template <class T>
class MutantStack: public std::stack<T>
{
	private:
	public:
		MutantStack()
		: std::stack<T>()
		{

		}

		virtual ~MutantStack()
		{

		}

		MutantStack( const MutantStack<T>& other )
		:	std::stack<T>(other)
		{
			
		}

		MutantStack<T>& operator=( const MutantStack<T>& other )
		{
			this->c = other.c;
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin(void)
		{
			return (this->c.begin());
		}

		iterator end(void)
		{
			return (this->c.end());
		}
};

#endif