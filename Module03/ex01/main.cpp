/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:36:29 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/15 19:52:19 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	ClapTrap	First("Bob");
	ClapTrap	Second("Eric");
	ScavTrap	Third("Jean");

	First.attack("Eric");
	Second.takeDamage(First.getAttackDamage());
	Second.beRepaired(5);
	Second.attack("Bob");
	First.takeDamage(Second.getAttackDamage());
	std::cout << First;
	std::cout << Second;
	Second.attack("Bob");
	std::cout << Second;
	Third.guardGate();
	Third.attack("Bob");
	Second.takeDamage(Third.getAttackDamage());
	Second.attack("Jean");
	Third.takeDamage(Second.getAttackDamage());
	std::cout << Second;
	std::cout << Third;
}