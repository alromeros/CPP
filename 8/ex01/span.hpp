/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:13:38 by alromero          #+#    #+#             */
/*   Updated: 2020/08/10 17:05:17 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

# define _GREEN		"\x1b[32m"
# define _WHITE		"\x1b[37m"
# define _PURPLE	"\x1b[35m"
# define _RED		"\x1b[31m"

class Span
{
	private:
		std::vector<int>			storage;
		std::vector<int>::iterator	iter;
		unsigned int				N;
	public:
		Span(unsigned int N);
		virtual 	~Span();
		Span& 		operator=(const Span& other);
		Span(const Span& other);
		Span();

		void		addNumber(std::vector<int>::iterator it1, std::vector<int>::iterator it2);
		void		addNumber( const int n);
		int			shortestSpan();
		int			longestSpan();

		std::vector<int> getStorage() const;
};

#endif