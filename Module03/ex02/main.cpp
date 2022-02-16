/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:36:29 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/16 15:11:49 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main(void)
{
	ClapTrap	First("Bob");
	ClapTrap	Second("Eric");
	ScavTrap	Third("Jean");
	FragTrap	Forth("Raymond");

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
	std::cout << Forth;
	Forth.highFiveGuys();
	Forth.attack("Jean");
	Third.takeDamage(Forth.getAttackDamage());
	Forth.attack("Jean");
	Third.takeDamage(Forth.getAttackDamage());
	Forth.attack("Jean");
	Third.takeDamage(Forth.getAttackDamage());
	Forth.attack("Jean");
	Third.takeDamage(Forth.getAttackDamage());
	Third.guardGate();
	std::cout << Third;
	std::cout << Forth;

}