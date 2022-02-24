/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:54:53 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/24 18:55:14 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template< typename T>
void		swap(T &a, T &b)
{
	T	tmp;

	tmp = b;
	b = a;
	a = tmp;
}

template< typename T>
T const &min(T const &a, T const &b)
{
	return (a >= b ? b : a);
}

template< typename T>
T const &max(T const &a, T const &b)
{
	return (a >= b ? a : b);
}