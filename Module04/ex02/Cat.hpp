/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:29:38 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/17 18:04:44 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat(void);
		Cat(Cat const & src);
		virtual ~Cat(void);

		Cat&	operator=(Cat & src);

		virtual	void		makeSound(void) const;

		std::string			getType(void) const;

		Brain				*getBrain(void) const;

	private:
		Brain				*_brain;
};
