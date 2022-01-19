/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amine <amine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:16:43 by amine             #+#    #+#             */
/*   Updated: 2022/01/19 17:42:28 by amine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout<<"* LOUD AND UNBEARABLE DEEFBACK NOISE *\n";
		return 0;
	}
	for (int i = 0; av[1][i]; ++i)
		if (av[1][i] >= 'a' && av[1][i] <= 'z')
			av[1][i] = toupper(av[1][i]);
	std::cout<<av[1]<<std::endl;
}