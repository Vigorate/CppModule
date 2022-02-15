/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:23:52 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/15 18:00:29 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);

		ScavTrap&		operator=(ScavTrap const & src);

		void			attack(const std::string &target);
		void			guardGate(void);

	private :
		std::string		_name;
		int				_hitpoint;
		int				_energypoint;
		int				_attackdamage;
};

std::ostream	&operator<<(std::ostream &ostream, const ScavTrap &src);