/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:45:08 by amine             #+#    #+#             */
/*   Updated: 2022/02/24 14:18:49 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int			main(int ac, char **av)
{
	if (ac != 2)
		return (1);

	Conversion	conv(av[1]);
	conv.displayType();
	return (0);
}