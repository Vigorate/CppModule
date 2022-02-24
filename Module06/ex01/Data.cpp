/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:57:16 by amine             #+#    #+#             */
/*   Updated: 2022/02/24 14:25:30 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void) : _n(0), _s("unknown") {}

Data::Data(int n, std::string s) : _n(n), _s(s) {}

Data::Data(Data const & src) : _n(src._n), _s(src._s) {}

Data::~Data(void) {}

std::string		Data::getString(void) const { return _s; }

int				Data::getInt(void) const {return _n; }

Data&  Data::operator=(Data const & src)
{
	if (this == &src)
		return *this;

	_n = src._n;
	_s = src._s;
	return (*this);
}
