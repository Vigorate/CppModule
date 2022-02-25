/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:13:20 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/25 18:22:50 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int			main(void)
{
	std::list<int>		lst;

	lst.push_back(1);
	lst.push_back(5);
	lst.push_back(9);
	easyfind(lst, 2);
	easyfind(lst, 5);
	return 0;
}