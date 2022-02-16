/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:18:47 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/16 21:32:43 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	std::cout << "WrongCat created" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src)
{
	*this = src;
	std::cout << "WrongCat copied." << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destroyed." << std::endl;
}

WrongCat&  WrongCat::operator=(WrongCat const & src)
{
	this->_type = src.getType();
	return (*this);
}

std::ostream    &operator<<(std::ostream &ostream, const WrongCat &src)
{
	ostream << "WrongCat";
	(void)src;
	return (ostream);
}

std::string		WrongCat::getType(void) const
{
	return (this->_type);
}

void			WrongCat::makeSound(void) const
{
	std::cout << "Wrong Miaoums." << std::endl;
}