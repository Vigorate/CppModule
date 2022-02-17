/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:39:50 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/17 16:56:39 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <iostream>

Brain::Brain(void)
{
	std::cout << "Brain created" << std::endl;
}

Brain::Brain(Brain const & src)
{
	*this = src;
	std::cout << "Brain copied." << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain destroyed." << std::endl;
}

Brain&  Brain::operator=(Brain const & rhs)
{
	if (this == &rhs)
		return (*this);
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}
