/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 21:42:08 by alromero          #+#    #+#             */
/*   Updated: 2020/07/12 16:54:26 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"	

template<typename T>
size_t	Array<T>::size() const
{
	return (this->ssize);
}

template <typename T> T&	Array<T>::operator[](int n) const
{
	if (n >= this->ssize || n < 0)
		throw (Array<T>::OutLimit());
	return (this->array[n]);
}

template <typename T>	Array<T>::Array(unsigned int n)
{
	T	*temp = new T;

	this->array = new T[n];
	for (unsigned int i = 0; i < n; i++)
		this->array[i] = *temp;
	delete temp;
	this->ssize = n;
}

template <typename T>	Array<T>::Array( Array const &other )
{
		this->array = new T[other.ssize];
		
		this->ssize = other.ssize;
		for (int i = 0; i < other.ssize; i++)
			array[i] = other[i];
}

template <typename T>	Array<T>::Array( )
{
	this->ssize = 0;
	this->array = new T[0];
}

template <typename T>	Array<T>::~Array( )
{
	delete[] this->array;
}


template <typename T>	Array<T>& Array<T>::operator=( Array const &other )
{
	delete[] this->array;
	this->array = NULL;
	this->array = new T[other.ssize];
		
	this->ssize = other.ssize;
	for (int i = 0; i < other.ssize; i++)
		array[i] = other[i];
	return (*this);
}

template <class T> Array<T>::OutLimit::OutLimit()
{
	this->strError = "El elemento al que se intenta acceder está fuera de los límites del array!";
}

template <class T> Array<T>::OutLimit::OutLimit( const OutLimit &other )
{
		this->strError = other.strError;
}

template <class T> Array<T>::OutLimit::~OutLimit() throw()
{

}

template <class T> typename Array<T>::OutLimit& Array<T>::OutLimit::operator=( OutLimit const &other )
{
	this->strError = other.strError;
	return (*this);
}

template <class T> const char* Array<T>::OutLimit::what() const throw ()
{
	return (this->strError.c_str());
}

template <typename T> std::ostream& operator<<(std::ostream &out, const Array<T> &f )
{
	for (unsigned int i = 0; i < f.size(); i++)
		out << "El valor del array en " << i << " es " << f[i] << std::endl;
	return (out); 
}


#endif