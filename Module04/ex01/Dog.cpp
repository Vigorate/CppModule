/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:45:25 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/17 16:41:09 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	this->_brain = new Brain;
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(Dog const &other)
{
	this->_type = other._type;
	this->_brain = new Brain(*other.getBrain());
	std::cout << "Dog copied constructor." << std::endl;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog destroyed." << std::endl;
}

Dog&  Dog::operator=(Dog const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs.getType();
	this->_brain = rhs.getBrain();
	return (*this);
}

std::string		Dog::getType(void) const
{
	return (this->_type);
}

void			Dog::makeSound(void) const
{
	std::cout << "Ouafaouf." << std::endl;
}

Brain			*Dog::getBrain(void) const
{
	return (this->_brain);
}
