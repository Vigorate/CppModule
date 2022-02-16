/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:23:52 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/16 15:23:29 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(std::string, int, int, int);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);

		ScavTrap&		operator=(ScavTrap const & src);

		void			guardGate(void);
};
