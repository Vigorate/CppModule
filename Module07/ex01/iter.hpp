/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:20:15 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/24 17:22:08 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template < typename T >
void		iter(T array[], size_t size, void (*f)(T &))
{
	for (size_t i = 0; i < size; ++i)
		(f)(array[i]);
}