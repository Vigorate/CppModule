/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:20:40 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/16 21:39:36 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const & src);
		virtual ~WrongAnimal(void);

		WrongAnimal&		operator=(WrongAnimal const & src);

		virtual void	makeSound(void) const;

		std::string		getType(void) const;
	protected :
		std::string		_type;
};

std::ostream    &operator<<(std::ostream &ostream, const WrongAnimal &src);