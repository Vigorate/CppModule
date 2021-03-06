/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:00:01 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/09 17:49:42 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie	*newZombie(std::string);
void	randomChump(std::string);

int		main(void)
{
	Zombie	*zombie1;

	zombie1 = newZombie("Henry");
	zombie1->announce();
	randomChump("Philip");
	delete zombie1;
}
