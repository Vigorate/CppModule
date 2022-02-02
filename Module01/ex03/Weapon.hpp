/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:59:07 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/02 18:06:02 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Weapon
{
	public:
		Weapon(std::string);
		~Weapon();

		std::string		getType(void) const;
		void			setType(std::string);

	private:
		std::string		type;
};