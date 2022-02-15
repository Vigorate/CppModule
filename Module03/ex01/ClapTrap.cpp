/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:50:30 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/15 18:19:57 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	this->_hitpoint = 10;
	this->_energypoint = 10;
	this->_attackdamage = 0;
	std::cout << "ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	this->_energypoint = src._energypoint;
	this->_hitpoint = src._hitpoint;
	this->_energypoint = src._energypoint;
	this->_name = src._name;
	std::cout << "ClapTrap copied." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destroyed." << std::endl;
}

ClapTrap&  ClapTrap::operator=(ClapTrap const & src)
{
	this->_name = src._name;
	return (*this);
}

std::ostream	&operator<<(std::ostream &ostream, const ClapTrap &src)
{
	ostream << "ClapTrap " << src.getName() << " has " << src.getHitPoint() << " hitpoints, " << src.getEnergyPoint() << " energy points." << std::endl;
	return (ostream);
}

void			ClapTrap::attack(const std::string &target)
{
	if (this->_energypoint > 0 && this->_hitpoint > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackdamage << " points of damage!" << std::endl;
		this->_energypoint -= 1;
	}
	else if (this->_energypoint == 0)
		std::cout << "ClapTrap " << this->_name << " does not have enough energy points." << std::endl;
	else if (this->_hitpoint == 0)
		std::cout << "ClapTrap " << this->_name << " does not have enough hit points." << std::endl;
}

void			ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage." << std::endl;
	if (this->_hitpoint == 0)
		return ;
	this->_hitpoint -= amount;
}

void			ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energypoint > 0 && this->_hitpoint > 0)
	{
		std::cout << "ClapTrap " << this->_name << " repaires " << amount << " point of health." << std::endl;
		this->_hitpoint += amount;
		this->_energypoint -= 1;
	}
	else if (this->_energypoint == 0)
		std::cout << "ClapTrap " << this->_name << " does not have enough energy points." << std::endl;
	else if (this->_hitpoint == 0)
		std::cout << "ClapTrap " << this->_name << " does not have enough hit points." << std::endl;
}

int				ClapTrap::getAttackDamage(void) const
{
	return (this->_attackdamage);
}

int				ClapTrap::getHitPoint(void) const
{
	return (this->_hitpoint);
}

int				ClapTrap::getEnergyPoint(void) const
{
	return (this->_energypoint);
}


std::string		ClapTrap::getName(void) const
{
	return (this->_name);
}
