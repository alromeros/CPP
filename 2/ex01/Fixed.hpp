/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 12:32:41 by alromero          #+#    #+#             */
/*   Updated: 2020/06/02 12:53:55 by alromero         ###   ########.fr       */
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
};

std::ostream&	operator <<(std::ostream &out, const Fixed &f);

#endif
