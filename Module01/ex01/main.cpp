/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:00:01 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/09 14:00:02 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie	*zombieHorde(int, std::string);

int		main(void)
{
	Zombie	*zombies;

	zombies = zombieHorde(-10, "Henry");
	if (!zombies)
		return (1);
	for (int i = 0; i < 10; ++i)
	{
		std::cout << i + 1 << " ";
		zombies[i].announce();
	}
	delete [] zombies;
	return (0);
}