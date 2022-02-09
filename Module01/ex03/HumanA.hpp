/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:59:05 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/09 14:04:22 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string, Weapon &);
		~HumanA();

		void	attack() const;
		
		void			setName(std::string);
		std::string		getName(void) const;

		void			setWeapon(Weapon);
		Weapon			*getWeapon();

	private:
		std::string		_name;
		Weapon			&_weapon;
};