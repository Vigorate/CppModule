/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:59:13 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/02 20:02:54 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

#include <iostream>

HumanA::HumanA(std::string name, Weapon weapon) : name(name), weapon(weapon)
{

}

HumanA::~HumanA()
{
	
}

void		HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType();
}

void		HumanA::setName(std::string name)
{
	this->name = name;
}

std::string	HumanA::getName(void) const
{
	return (this->name);
}