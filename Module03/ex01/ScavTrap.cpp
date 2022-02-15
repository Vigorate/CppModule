/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:23:44 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/15 18:19:23 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitpoint = 100;
	this->_energypoint = 50;
	this->_attackdamage = 20;
	std::cout << "ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	(void)src;
	std::cout << "ScavTrap copied." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destroyed." << std::endl;
}

ScavTrap&  ScavTrap::operator=(ScavTrap const & src)
{
	(void)src;
	return (*this);
}

std::ostream	&operator<<(std::ostream &ostream, const ScavTrap &src)
{
	(void)src;
	ostream << "ScavTrap";
	return (ostream);
}

void			ScavTrap::attack(const std::string &target)
{
	if (this->_energypoint > 0 && this->_hitpoint > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attackdamage << " points of damage!" << std::endl;
		this->_energypoint -= 1;
	}
	else if (this->_energypoint == 0)
		std::cout << "ScavTrap " << this->_name << " does not have enough energy points." << std::endl;
	else if (this->_hitpoint == 0)
		std::cout << "ScavTrap " << this->_name << " does not have enough hit points." << std::endl;
}

void			ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " has entered gatekeeper mode." << std::endl;
}