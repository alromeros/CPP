/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 12:32:41 by alromero          #+#    #+#             */
/*   Updated: 2020/05/12 14:50:43 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int 				fixedPoint;
		static const int 	nBits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed( const Fixed &f );
		Fixed &operator =(const Fixed &f);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif