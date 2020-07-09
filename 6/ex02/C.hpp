/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 18:24:33 by alromero          #+#    #+#             */
/*   Updated: 2020/06/25 18:59:00 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
#define C_HPP

#include "Base.hpp"

class C: public Base
{
	public:
		C();
		C( C const &other );
		C& operator=( C const &other );
		~C();
};

#endif
