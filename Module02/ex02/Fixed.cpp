/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:32:34 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/13 18:04:37 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <stdint.h>
#include <cmath>

Fixed::Fixed(void)
{
	this->fixed_decimal = 0;
}

Fixed::Fixed(int const nbr)
{
	this->fixed_decimal = nbr << this->n_bits;
}

Fixed::Fixed(float const nbr)
{
	this->fixed_decimal = roundf(nbr * (1 << this->n_bits));
}


Fixed::Fixed(Fixed const & src)
{
	*this = src;
}

Fixed::~Fixed(void)
{

}

Fixed& 		Fixed::operator=(Fixed const & src)
{
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

Fixed		&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return a;
	else
		return b;
}

Fixed		&Fixed::min(Fixed &a, Fixed &b) 
{
	if (a.toFloat() < b.toFloat())
		return a;
	else
		return b;
}

const Fixed		&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return a;
	else
		return b;
}

const Fixed		&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return a;
	else
		return b;
}

Fixed		Fixed::operator+(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed		Fixed::operator-(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed		Fixed::operator/(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed		Fixed::operator*(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}


bool		Fixed::operator!=(Fixed const &rhs) const
{
	if (this->fixed_decimal != rhs.getRawBits())
		return (true);
	return (false);
}

bool		Fixed::operator==(Fixed const &rhs) const
{
	if (this->fixed_decimal != rhs.getRawBits())
		return (true);
	return (false);
}

bool		Fixed::operator>=(Fixed const &rhs) const
{
	if (this->fixed_decimal >= rhs.getRawBits())
		return (true);
	return (false);
}

bool		Fixed::operator<=(Fixed const &rhs) const
{
	if (this->fixed_decimal <= rhs.getRawBits())
		return (true);
	return (false);
}

bool		Fixed::operator>(Fixed const &rhs) const
{
	if (this->fixed_decimal > rhs.getRawBits())
		return (true);
	return (false);
}

bool		Fixed::operator<(Fixed const &rhs) const
{
	if (this->fixed_decimal < rhs.getRawBits())
		return (true);
	return (false);
}

Fixed		&Fixed::operator++()
{
	this->fixed_decimal += 1;
	return (*this);
}

Fixed		Fixed::operator++(int n)
{
	(void)n;
	Fixed tmp = *this;
	this->fixed_decimal += 1;
	return (tmp);
}

Fixed		&Fixed::operator--()
{
	this->fixed_decimal -= 1;
	return (*this);
}

Fixed		Fixed::operator--(int n)
{
	(void)n;
	Fixed tmp = *this;
	this->fixed_decimal -= 1;
	return (tmp);
}

