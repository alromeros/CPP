/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 12:32:41 by alromero          #+#    #+#             */
/*   Updated: 2020/06/02 12:54:12 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int 				fixedPoint;
		static const int 	nBits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const int p);
		Fixed(const float p);
		Fixed( const Fixed &f );
		Fixed&	operator =(const Fixed &f);
		int getRawBits( void ) const;
		float toFloat( void ) const;
		int toInt( void ) const;
		void setRawBits( int const raw );

		bool	operator>(	const Fixed &f );
		bool	operator<(	const Fixed &f );
		bool	operator>=(	const Fixed &f );
		bool	operator<=(	const Fixed &f );
		bool	operator==(	const Fixed &f );
		bool	operator!=(	const Fixed &f);

		Fixed	operator +(const Fixed &f);
		Fixed	operator -(const Fixed &f);
		Fixed	operator *(const Fixed &f);
		Fixed	operator /(const Fixed &f);
		Fixed	operator ++( int );
		Fixed	operator ++( );
		Fixed	operator --( int );
		Fixed	operator --( );

		static const Fixed&	min( const Fixed& a, const Fixed& b );
		static const Fixed&	max( const Fixed& a, const Fixed& b );
		static Fixed&			min(  Fixed& a,  Fixed& b );
		static Fixed&			max(  Fixed& a,  Fixed& b );
};

std::ostream&	operator <<(std::ostream &out, const Fixed &f);

Fixed&			min(  Fixed& a,  Fixed& b );
Fixed&			max(  Fixed& a,  Fixed& b );
const Fixed&	min( const Fixed& a, const Fixed& b );
const Fixed&	max( const Fixed& a, const Fixed& b );

#endif
