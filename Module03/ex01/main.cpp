/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:36:29 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/15 17:21:09 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap	First("Bob");
	ClapTrap	Second("Eric");

	First.attack("Eric");
	Second.takeDamage(First.getAttackDamage());
	Second.beRepaired(5);
	Second.attack("Bob");
	First.takeDamage(Second.getAttackDamage());
	std::cout << First;
	std::cout << Second;
	Second.attack("Bob");
	Second.attack("Bob");
	Second.attack("Bob");
	Second.attack("Bob");
	Second.attack("Bob");
	Second.attack("Bob");
	Second.attack("Bob");
	Second.attack("Bob");
	Second.attack("Bob");
	Second.attack("Bob");
	Second.attack("Bob");
	Second.attack("Bob");
	std::cout << Second;
}