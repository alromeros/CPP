/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:12:13 by alromero          #+#    #+#             */
/*   Updated: 2020/08/10 17:24:00 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int N)
:			N(N)
{
	this->storage.reserve(N);
	this->iter = this->storage.begin();
}

Span::~Span()
{

}

Span::Span(const Span& other)
{
	this->storage.assign(other.storage.begin(), other.storage.end());
	this->iter = other.iter;
	this->N = other.N;
}

Span& 		Span::operator=(const Span& other)
{
	this->storage.assign(other.storage.begin(), other.storage.end());
	this->iter = other.iter;
	this->N = other.N;
	
	return (*this);
}

Span::Span()
:		iter(this->storage.begin()), N(0)
{
	this->storage.resize(0);
}

void		Span::addNumber( const int n)
{
	if (this->storage.size() != this->N)
		this->storage.push_back(n);
	else
		throw (std::exception());
	this->iter++;
}

int			Span::shortestSpan()
{
	std::vector<int> temp = this->getStorage();
	int diff = INT32_MAX;
	int temDiff = 0;

	std::sort(temp.begin(), temp.end());

	for (std::vector<int>::iterator i = temp.begin(); i != temp.end() - 1; i++)
	{
		temDiff = *(i + 1) - *i;
		if (temDiff < diff)
			diff = temDiff;
	}
	return (diff);
}

int			Span::longestSpan()
{
	return (*std::max_element(this->storage.begin(), this->storage.end()) -  *std::min_element(this->storage.begin(), this->storage.end()));
}

void Span::addNumber(std::vector<int>::iterator it1, std::vector<int>::iterator it2)
{
	size_t range = std::distance(it1, it2);

	if (this->storage.size() + range > this->N)
		throw (std::exception());
	for (size_t i = 0; i < range; i++)
	{
		this->storage.push_back(*it1);
		it1++;
		this->iter++;
	}
}

std::vector<int> Span::getStorage() const
{
	return this->storage;
}
