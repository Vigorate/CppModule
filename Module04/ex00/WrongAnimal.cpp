/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:47:45 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/16 21:32:50 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	*this = src;
	std::cout << "WrongAnimal copied." << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destroyed." << std::endl;
}

WrongAnimal&  WrongAnimal::operator=(WrongAnimal const & src)
{
	this->_type = src.getType();
	return (*this);
}

std::ostream    &operator<<(std::ostream &ostream, const WrongAnimal &src)
{
	ostream << "WrongAnimal";
	(void)src;
	return (ostream);
}

std::string		WrongAnimal::getType(void) const
{
	return (this->_type);
}

void			WrongAnimal::makeSound(void) const
{
	std::cout << "*Some animal noises*" << std::endl;
}