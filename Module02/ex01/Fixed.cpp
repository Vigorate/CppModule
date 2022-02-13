/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:32:34 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/13 18:10:49 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void)
{
	this->fixed_decimal = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const nbr)
{
	this->fixed_decimal = nbr << this->n_bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const nbr)
{
	this->fixed_decimal = roundf(nbr * (1 << this->n_bits));
	std::cout << "Float constructor called" << std::endl;
}


Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& 		Fixed::operator=(Fixed const & src)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &src)
		this->fixed_decimal = src.getRawBits();
	return (*this);
}

float		Fixed::toFloat(void) const
{
	return (float)this->fixed_decimal / (1 << Fixed::n_bits);
}

int			Fixed::toInt(void) const
{
	return (this->fixed_decimal >> this->n_bits);
}

int			Fixed::getRawBits(void) const
{
	return (this->fixed_decimal);
}

void		Fixed::setRawBits(const int raw)
{
	this->fixed_decimal = raw;
}

std::ostream	&operator<<(std::ostream &ostream, const Fixed &src)
{
	ostream << src.toFloat();
	return (ostream);
}
