/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:29:08 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/16 18:41:27 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(std::string, int, int, int);
		FragTrap(FragTrap const & src);
		~FragTrap(void);

		FragTrap&		operator=(FragTrap const & src);

		void			attack(const std::string &target);

		virtual void			setAttackDamage(void);
		virtual void			setHitPoint(void);
		virtual void			setEnergyPoint(void);

		void			highFiveGuys(void);
};
