/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:29:38 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/17 16:29:40 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const & src);
		virtual ~Cat(void);

		Cat&	operator=(Cat const & src);

		virtual	void		makeSound(void) const;

		std::string			getType(void) const;

		Brain				*getBrain(void) const;

	private:
		Brain				*_brain;
};
