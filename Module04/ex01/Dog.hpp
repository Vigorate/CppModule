/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:45:24 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/17 16:27:23 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const & src);
		virtual ~Dog(void);

		Dog&	operator=(Dog const & src);

		virtual	void		makeSound(void) const;

		std::string			getType(void) const;

		Brain				*getBrain(void) const;

	private:
		Brain				*_brain;
};
