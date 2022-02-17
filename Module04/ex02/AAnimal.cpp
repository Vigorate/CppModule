/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:47:45 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/17 17:54:41 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "AAnimal created" << std::endl;
}

AAnimal::AAnimal(AAnimal const & src)
{
	*this = src;
	std::cout << "AAnimal copied." << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destroyed." << std::endl;
}

AAnimal&  AAnimal::operator=(AAnimal const & src)
{
	this->_type = src.getType();
	return (*this);
}

std::ostream    &operator<<(std::ostream &ostream, const AAnimal &src)
{
	ostream << "AAnimal";
	(void)src;
	return (ostream);
}

std::string		AAnimal::getType(void) const
{
	return (this->_type);
}

void			AAnimal::makeSound(void) const
{
	std::cout << "*Some animal noises*" << std::endl;
}