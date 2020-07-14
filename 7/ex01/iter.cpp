/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 20:11:02 by alromero          #+#    #+#             */
/*   Updated: 2020/07/14 10:07:14 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <class T>
void iter(T *a, unsigned long n, void (*function)(T const &element))
{
	for (unsigned long i = 0; i < n; i++)
		(*function)(a[i]);
}

template <class T>
void	printer(T const &n)
{
	std::cout <<  "El elemento de la array es: " << n << std::endl;
}


// funciones y clase de los criterios de evaluación

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() 
{
	std::cout << "\n-----[MAIN PROPIO]-----\n" << std::endl;
	
	std::string arr[] = {"Acabo de comer ensaladilla", "No sé que voy a cenar", "Tengo que ir al mercadona"};

	iter( arr, 3, printer);

	std::cout << "\n-----[MAIN DE LA EVALUACIÓN]-----\n" << std::endl;

	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
	
	iter( tab, 5, print );
	iter( tab2, 5, print );
	
	return 0;
}
