/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:15:35 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/16 16:24:56 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	FragTrap::setHitPoint();
	ScavTrap::setEnergyPoint();
	FragTrap::setAttackDamage();
	std::cout << "Default DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	ClapTrap::setName(name + "_clap_name");
	this->_name = name;
	FragTrap::setHitPoint();
	ScavTrap::setEnergyPoint();
	FragTrap::setAttackDamage();
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	if (&src == this)
		return ;
	this->_energypoint = src.getEnergyPoint();
	this->_hitpoint = src.getHitPoint();
	this->_attackdamage = src.getAttackDamage();
	this->_name = src.getName();
	std::cout << "ScavTrap copied" << std::endl;
	return ;
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destroyed." << std::endl;
}

void			DiamondTrap::attack(const std::string &target)
{
	this->ScavTrap::attack(target);
}

void			DiamondTrap::whoAmI(void)
{
	std::cout << "Diamond trap name : " << this->_name << " has also ClapTrap name : " << ClapTrap::getName() << std::endl;
}