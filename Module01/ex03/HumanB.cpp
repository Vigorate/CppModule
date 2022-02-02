/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:59:11 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/02 20:07:14 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(std::string name) : name(name)
{

}

HumanB::~HumanB()
{
	
}

void		HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType();
}

void		HumanB::setName(std::string name)
{
	this->name = name;
}

std::string	HumanB::getName(void) const
{
	return (this->name);
}

void		HumanB::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}