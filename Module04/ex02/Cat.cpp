/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:28:48 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/17 18:04:49 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	this->_brain = new Brain;
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(Cat const &other)
{
	this->_type = other._type;
	this->_brain = new Brain(*other.getBrain());
	std::cout << "Cat copied constructor." << std::endl;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat destroyed." << std::endl;
}

Cat&  Cat::operator=(Cat & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs.getType();
	this->_brain = rhs.getBrain();
	return (*this);
}

std::string		Cat::getType(void) const
{
	return (this->_type);
}

void			Cat::makeSound(void) const
{
	std::cout << "Miaoums." << std::endl;
}

Brain			*Cat::getBrain(void) const
{
	return (this->_brain);
}
