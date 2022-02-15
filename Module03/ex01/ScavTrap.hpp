/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:23:52 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/15 19:50:44 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

//std::ostream	&operator<<(std::ostream &ostream, const ScavTrap &src);