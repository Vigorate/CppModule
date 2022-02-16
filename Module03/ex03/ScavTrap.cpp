/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:23:44 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/16 16:15:48 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	ScavTrap::setHitPoint();
	ScavTrap::setEnergyPoint();
	ScavTrap::setAttackDamage();
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	ScavTrap::setHitPoint();
	ScavTrap::setEnergyPoint();
	ScavTrap::setAttackDamage();
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	this->_name = src.getName();
	ScavTrap::setHitPoint();
	ScavTrap::setEnergyPoint();
	ScavTrap::setAttackDamage();
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

void			ScavTrap::setHitPoint(void)
{
	this->_hitpoint = 100;
}

void			ScavTrap::setEnergyPoint(void)
{
	this->_energypoint = 50;
}

void			ScavTrap::setAttackDamage(void)
{
	this->_attackdamage = 20;
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