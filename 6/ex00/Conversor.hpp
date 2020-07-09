/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversor.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 21:58:22 by alromero          #+#    #+#             */
/*   Updated: 2020/06/23 22:00:22 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSOR_HPP
#define CONVERSOR_HPP

#define CHAR	5
#define	PSEUDO	6
#define	FLOAT	7
#define	DOUBLE	8
#define INT		9
#define ERROR1	-1
#define	ERROR2  -2
#define ERROR3	-3


#include <iostream>
#include <math.h>

class Conversor
{
	private:
		Conversor();
		std::string const	literal;
		int					litInt;
		double				litDouble;
		float				litFloat;
		char				litChar;
		int					signal;
	public:
		Conversor( Conversor const & other);
		Conversor& operator=( Conversor const & other );
		Conversor( std::string const literal );
		~Conversor();

		void		strParser();
		int			errorHandler() const;
		int			pseudoLitCheck() const;
		void		intPrint();
		void		charPrint();
		void		floatPrint();
		void		doublePrint();
		void		pseudoPrint();

		void		setLiteral(std::string const literal);
		void		setLitInt(int);
		void		setLitDouble(double);
		void		setLitFloat(float);
		void		setLitChar(char);
		void		setSignal(int);
		
		int			getLitInt() const;
		std::string	getLiteral() const;
		double		getLitDouble() const;
		float		getLitFloat() const;
		char		getLitChar() const;
		int			getSignal() const;
};

#endif