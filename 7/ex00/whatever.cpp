/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 20:06:21 by alromero          #+#    #+#             */
/*   Updated: 2020/07/13 12:48:16 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<class prueba>

void swap(prueba &ab, prueba &bc)
{
	prueba c = ab;

	ab = bc;
	bc = c;
}

template<class prueba>

prueba min(prueba &ab, prueba &bc)
{
	if (ab > bc)
		return (bc);
	else
		return (ab);
}

template<class prueba>

prueba max(prueba &ab, prueba &bc)
{
	if (ab < bc)
		return (bc);
	else
		return (ab);
}

//clase de la corrección 

class Awesome 
{
	public:
		Awesome( int n ) : _n( n ) {}
		bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
		int  getN() const {return this->_n;} // no está en la corrección
	private:
		int _n;
};

std::ostream &operator <<(std::ostream &out, const Awesome &f) // no está en la corrección
{ 
	out << f.getN(); 
	return out; 
}

int main(void)
{
	std::cout << "\n-----[TEST 1: SUBJECT]-----\n" << std::endl;
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	std::cout << "\n-----[TEST 2: OBJETOS]-----\n" << std::endl;

	
	Awesome *uwu = new Awesome(12);
	Awesome *ewe = new Awesome(234567);;

	std::cout << "El valor del objeto uwu es " << *uwu << std::endl;
	std::cout << "El valor del objeto ewe es " << *ewe << std::endl;
	::swap( *uwu, *ewe );
	std::cout << "\n      ---[SWAP]---\n\nEL valor del objeto uwu es " << *uwu << std::endl;
	std::cout << "El valor del objeto ewe es " << *ewe << std::endl;
	std::cout << "\n      ---[MIN]---\n\nmin(uwu, ewe) = " << ::min(*uwu, *ewe) << std::endl;
	std::cout << "\n      ---[MAX]---\n\nmax(uwu, ewe) = " << ::max(*uwu, *ewe) << std::endl;
	
	delete uwu;
	delete ewe;
	return 0;
}
