/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amine <amine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:47:42 by amine             #+#    #+#             */
/*   Updated: 2022/02/23 17:54:55 by amine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(void) : _value(0.) {}

Conversion::Conversion(std::string const &arg)
{
	_value = std::stod(arg);
}

Conversion::Conversion(Conversion const & src) { *this = src; }

Conversion::~Conversion(void) {}

char			Conversion::getChar(void) const
{
	char c = static_cast<char>(_value);

	if (!std::isfinite(_value) || _value > CHAR_MAX || _value < CHAR_MIN)
		throw Conversion::ImpossibleConversion();
	if (!std::isprint(c))
		throw Conversion::UndisplayableConversion ();

	return c;
}

int		Conversion::getInt(void) const
{
	if (!std::isfinite(_value) || _value > INT_MAX || _value < INT_MIN)
		throw Conversion::ImpossibleConversion();

	return static_cast<int>(_value);
}

double		Conversion::getDouble(void) const
{
	return _value;
}

float		Conversion::getFloat(void) const
{
	return static_cast<float>(_value);
}

void		Conversion::displayType(void) const
{
	try
	{
		std::cout << "char: " << getChar() << std::endl;;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "int: " << getInt() << std::endl;;	
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "float: " << std::fixed << std::setprecision(1) << getFloat() << "f" << std::endl;;
	std::cout << "double: " << std::fixed << std::setprecision(1) << getDouble() << std::endl;
}

const char		*Conversion::UndisplayableConversion::what() const throw()
{
	return ("non displayable");
}

const char		*Conversion::ImpossibleConversion::what() const throw()
{
	return ("impossible");
}

Conversion&  Conversion::operator=(Conversion const & src)
{
	if (this == &src)
		return (*this);

	_value = src._value;
	return *this;
}
