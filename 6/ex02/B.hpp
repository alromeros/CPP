/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 18:24:02 by alromero          #+#    #+#             */
/*   Updated: 2020/06/25 18:58:54 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
#define B_HPP

#include "Base.hpp"

class B: public Base
{
	public:
		B();
		B( B const &other );
		B& operator=( B const &other );
		~B();
};

#endif
