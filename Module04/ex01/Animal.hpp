/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:47:31 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/17 17:07:58 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Brain.hpp"

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal(void);
		Animal(Animal const & src);
		virtual ~Animal(void);

		Animal&					operator=(Animal const & src);

		virtual void			makeSound(void) const;

		std::string				getType(void) const;

		virtual Brain			*getBrain(void) const = 0;

	protected :
		std::string		_type;
};

std::ostream    &operator<<(std::ostream &ostream, const Animal &src);