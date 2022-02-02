/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:59:09 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/02 18:05:55 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	setType(type);
}

Weapon::~Weapon()
{
	
}

std::string		Weapon::getType(void) const
{
	return (this->type);
}

void			Weapon::setType(std::string type)
{
	this->type = type;
}