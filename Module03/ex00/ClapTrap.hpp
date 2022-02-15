/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:50:36 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/15 16:59:22 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
	public:

		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);

		ClapTrap&     operator=(ClapTrap const & src);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		int				getAttackDamage(void) const;
		std::string		getName(void) const;
		int				getHitPoint(void) const;
		int				getEnergyPoint(void) const;

	private :
		std::string		_name;
		int				_hitpoint;
		int				_energypoint;
		int				_attackdamage;
};

std::ostream    &operator<<(std::ostream &ostream, const ClapTrap &src);