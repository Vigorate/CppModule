/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:47:45 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/16 21:32:00 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal created" << std::endl;
}

Animal::Animal(Animal const & src)
{
	*this = src;
	std::cout << "Animal copied." << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destroyed." << std::endl;
}

Animal&  Animal::operator=(Animal const & src)
{
	this->_type = src.getType();
	return (*this);
}

std::ostream    &operator<<(std::ostream &ostream, const Animal &src)
{
	ostream << "Animal";
	(void)src;
	return (ostream);
}

std::string		Animal::getType(void) const
{
	return (this->_type);
}

void			Animal::makeSound(void) const
{
	std::cout << "*Some animal noises*" << std::endl;
}