/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:45:21 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/16 21:32:25 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(Cat const & src)
{
	*this = src;
	std::cout << "Cat copied." << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destroyed." << std::endl;
}

Cat&  Cat::operator=(Cat const & src)
{
	this->_type = src.getType();
	return (*this);
}

std::ostream    &operator<<(std::ostream &ostream, const Cat &src)
{
	ostream << "Cat";
	(void)src;
	return (ostream);
}

std::string		Cat::getType(void) const
{
	return (this->_type);
}

void			Cat::makeSound(void) const
{
	std::cout << "Miaoums." << std::endl;
}