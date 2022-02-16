/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:45:25 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/16 21:34:33 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(Dog const & src)
{
	*this = src;
	std::cout << "Dog copied." << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destroyed." << std::endl;
}

Dog&  Dog::operator=(Dog const & src)
{
	this->_type = src.getType();
	return (*this);
}

std::ostream    &operator<<(std::ostream &ostream, const Dog &src)
{
	ostream << "Dog";
	(void)src;
	return (ostream);
}

std::string		Dog::getType(void) const
{
	return (this->_type);
}

void			Dog::makeSound(void) const
{
	std::cout << "Ouafaouf." << std::endl;
}