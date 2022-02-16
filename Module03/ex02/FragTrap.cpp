/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:29:12 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/16 14:38:59 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("Base", 100, 100, 30)
{
	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	(void)src;
	std::cout << "Copy FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destroyed." << std::endl;
}

FragTrap&  FragTrap::operator=(FragTrap const & src)
{
	if (&src == this)
		return (*this);
	this->_energypoint = src.getEnergyPoint();
	this->_hitpoint = src.getHitPoint();
	this->_attackdamage = src.getAttackDamage();
	this->_name = src.getName();
	std::cout << "FragTrap copied" << std::endl;
	return (*this);
}

void		FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->_name << " asks for a High Five !" << std::endl;
}
