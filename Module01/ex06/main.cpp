/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:23:19 by amine             #+#    #+#             */
/*   Updated: 2022/02/09 15:27:22 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(int ac, char **av)
{
	if (ac == 1 || ac > 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (1);
	}

	std::string	level = av[1];

	Karen	karen(level);

	if (karen.complain(level) == false)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;

}