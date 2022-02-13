/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:32:34 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/09 21:09:32 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->decimal = 0;
	std::cout << "Default constructor called" << std::endl;
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
	this->decimal = src.getRawBits();
	return (*this);
}

int			Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->decimal);
}

void		Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->decimal = raw;
}

std::ostream	&operator<<(std::ostream &ostream, const Fixed &src)
{
	ostream << "Fixed is " << src.getRawBits();
	return (ostream);
}