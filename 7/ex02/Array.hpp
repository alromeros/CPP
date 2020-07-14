/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 20:35:02 by alromero          #+#    #+#             */
/*   Updated: 2020/07/12 14:50:36 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <class T> class Array
{
	private:
		T		*array;
		int		ssize;
	public:
		Array();
		Array(unsigned int n);
		Array( Array const &other );
		Array& operator=( Array const &other );
		virtual ~Array();

		T&		operator[](int n) const;
		size_t	size() const;

		class OutLimit: public std::exception
		{
			protected:
				std::string strError;
			public:
				OutLimit();
				OutLimit( const OutLimit &other );
				virtual ~OutLimit() throw();
				OutLimit& operator=( OutLimit const &other );

				virtual const char* what() const throw ();
		};

};

template <typename T> std::ostream& operator<<(std::ostream &out, const Array<T> &f );

#include "Array.tpp"

#endif