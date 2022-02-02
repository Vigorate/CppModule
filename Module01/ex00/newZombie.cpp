/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:00:05 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/02 17:08:02 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie		*newZombie(std::string name)
{
	Zombie	*instance;

	instance = new Zombie;
	instance->setname(name);
	return (instance);
}