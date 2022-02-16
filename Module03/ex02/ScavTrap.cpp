/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:23:44 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/16 18:38:46 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Base", 100, 50, 20)
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap constructor called" << std::endl;
}


ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	(void)src;
	std::cout << "Copy ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destroyed." << std::endl;
}

ScavTrap&  ScavTrap::operator=(ScavTrap const & src)
{
	if (&src == this)
		return (*this);
	this->_energypoint = src.getEnergyPoint();
	this->_hitpoint = src.getHitPoint();
	this->_attackdamage = src.getAttackDamage();
	this->_name = src.getName();
	std::cout << "ScavTrap copied" << std::endl;
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
	else if (this->_energypoint <= 0)
		std::cout << "ScavTrap " << this->_name << " does not have enough energy points." << std::endl;
	else if (this->_hitpoint <= 0)
		std::cout << "ScavTrap " << this->_name << " does not have enough hit points." << std::endl;
}

void			ScavTrap::guardGate(void)
{
	if (this->_energypoint > 0 && this->_hitpoint > 0)
	{
		std::cout << "ScavTrap " << this->getName() << " has entered gatekeeper mode." << std::endl;
		this->_energypoint -= 1;
	}
	else if (this->_energypoint <= 0)
		std::cout << "ScavTrap " << this->getName() << " does not have enough energy points to enter gatekeeper mode." << std::endl;
	else if (this->_hitpoint <= 0)
		std::cout << "ScavTrap " << this->getName() << " does not have enough hit points to enter gatekeeper mode." << std::endl;

}