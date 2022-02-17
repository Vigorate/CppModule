/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:40:00 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/17 16:45:15 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>


class Brain
{
	public:

		Brain(void);
		Brain(Brain const & src);
		~Brain(void);

		Brain&     operator=(Brain const & src);

		std::string		ideas[100];
};
