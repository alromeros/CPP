/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 19:00:41 by alromero          #+#    #+#             */
/*   Updated: 2020/06/25 19:01:17 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_HPP
#define IDENTIFY_HPP

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void);

void identify_from_pointer(Base * p);

void identify_from_reference( Base & p);

#endif