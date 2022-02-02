/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:59:04 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/02 20:10:47 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string);
		~HumanB();

		void	attack();
		
		void			setName(std::string);
		std::string		getName(void) const;

		void			setWeapon(Weapon);
		Weapon			*getWeapon();

	private:
		Weapon			weapon;
		std::string		name;
	
};