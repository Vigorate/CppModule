/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:00:11 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/02 17:12:47 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void	Zombie::annonce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void)
{

}

void	Zombie::setname(std::string name)
{
	this->name = name;
}

std::string		Zombie::getname(void) const
{
	return (this->name);
}


Zombie::~Zombie(void)
{
	std::cout << "Zombie named : " << this->getname() << " has been destroyed" << std::endl;
}