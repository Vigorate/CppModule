/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:20:04 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/24 17:24:04 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template< typename T >
void		display(T &arg)
{
	std::cout << arg << std::endl;
}

int			main(void)
{
	std::string		array[3] = {"abc", "def", "hij"};
	int				tab[5] = {1, 2, 3, 4, 5};

	iter(array, 3, display);
	iter(tab, 5, display);
	return 0;
}