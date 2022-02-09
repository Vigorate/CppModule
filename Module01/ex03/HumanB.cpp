/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:59:11 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/09 14:07:08 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(std::string name) : 
_name(name),
_weapon(NULL)
{

}

HumanB::~HumanB()
{
	
}

void		HumanB::attack(void) const
{
	if (!this->_weapon)
	{
		std::cout << this->_name << " does not have a weapon" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void		HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}