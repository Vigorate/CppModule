/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:16:43 by amine             #+#    #+#             */
/*   Updated: 2022/02/01 17:33:46 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 0;
	}
	for (int j = 1; j < ac; ++j)
		for (int i = 0; av[j][i]; ++i)
			av[j][i] = toupper(av[j][i]);
	for (int i = 1; i < ac; ++i)
		std::cout << av[i];
	std::cout << std::endl;
	return (0);
}