/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:59:04 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/09 14:06:15 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string);
		~HumanB();

		void	attack() const;
		
		void			setWeapon(Weapon &);

	private:
		std::string		_name;
		Weapon			*_weapon;
};