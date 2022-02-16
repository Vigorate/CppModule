/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:45:24 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/16 21:30:39 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const & src);
		~Dog(void);

		Dog&	operator=(Dog const & src);

		virtual	void		makeSound(void) const;

		std::string			getType(void) const;
};

std::ostream    &operator<<(std::ostream &ostream, const Dog &src);