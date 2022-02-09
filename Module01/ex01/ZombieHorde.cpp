/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:14:28 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/09 13:59:43 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name)
{
	Zombie		*zombies;

	if (n <= 0)
		return (NULL);
	zombies = new Zombie[n];
	for (int i = 0; i < n; ++i)
		zombies[i].setname(name);
	return (zombies);
}