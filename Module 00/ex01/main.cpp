/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:23:48 by ambelkac          #+#    #+#             */
/*   Updated: 2022/01/28 19:24:25 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>
#include <string>

// Utiliser getline a la place de cin
int		main(void)
{
	PhoneBook	instance;
	std::string	input;
	int			idx = 0;

	while (1)
	{
		getline(std::cin, input);
		if (!input.compare(0, 4, "EXIT", 4))
			return (0);
		else if (!input.compare(0, 3, "ADD", 3))
		{
			if (idx < 8)
			{
				instance.add_instruction(idx);
				++idx;
			}
		}
		else if (!input.compare(0, 5, "SEARCH", 5))
			instance.search_instruction(idx);
		else
			std::cout << "Invalid instruction." << std::endl;
		
	}
}