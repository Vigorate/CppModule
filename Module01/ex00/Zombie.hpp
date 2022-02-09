/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:00:15 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/09 13:57:41 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Zombie
{
	public:

		Zombie();
		~Zombie();

		void			announce(void);
		void			setname(std::string name);
		std::string		getname(void) const;

	private:
		std::string		name;
};