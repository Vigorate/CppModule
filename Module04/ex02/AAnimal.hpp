/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:47:31 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/17 17:56:18 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Brain.hpp"

#include <iostream>
#include <string>

class AAnimal
{
	public:
		AAnimal(void);
		AAnimal(AAnimal const & src);
		virtual ~AAnimal(void);

		AAnimal&					operator=(AAnimal const & src);

		virtual void			makeSound(void) const = 0;

		virtual std::string				getType(void) const = 0;

		virtual Brain			*getBrain(void) const = 0;

	protected :
		std::string		_type;
};

std::ostream    &operator<<(std::ostream &ostream, const AAnimal &src);