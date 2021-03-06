/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:29:08 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/16 19:44:31 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(std::string, int, int, int);
		FragTrap(FragTrap const & src);
		~FragTrap(void);

		void			attack(const std::string &target);

		FragTrap&		operator=(FragTrap const & src);

		void			highFiveGuys(void);
};
