/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:23:48 by ambelkac          #+#    #+#             */
/*   Updated: 2022/01/28 17:33:11 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>
#include <string>

void	add_inst(PhoneBook instance, int idx)
{
	std::string	str;

	std::cout << "Please enter first name : ";
	std::cin >> str;
	(instance.getContact(idx)).setinfo(str, 0);
	std::cout << (instance.getContact(idx)).getinfo(0) << std::endl;
	std::cout << "Please enter last name : ";
	std::cin >> str;
	(instance.getContact(idx)).setinfo(str, 1);
	std::cout << "Please enter nickname : ";
	std::cin >> str;
	(instance.getContact(idx)).setinfo(str, 2);
	std::cout << "Please enter phone number : ";
	std::cin >> str;
	(instance.getContact(idx)).setinfo(str, 3);
	std::cout << "Please enter darkest secret : ";
	std::cin >> str;
	(instance.getContact(idx)).setinfo(str, 4);
}

void	search_inst(PhoneBook instance, int idx)
{
	for (int i = 0; i < idx + 1; ++i)
	{
		std::cout << "Contact nbr : " << i << std::endl;
		for (int j = 0; j < 5; ++j)
		{
			std::cout << (instance.getContact(i)).getinfo(j);
			std::cout << " | ";
		}
		std::cout << std::endl;
	}
}

int		main(void)
{
	PhoneBook	instance;
	std::string	input;
	int			idx = 0;

	while (1)
	{
		std::cin >> input;
		if (!input.compare(0, 4, "EXIT", 4))
			return (0);
		else if (!input.compare(0, 3, "ADD", 3))
		{
			if (idx < 8)
			{
				add_inst(instance, idx);
				++idx;
			}
		}
		else if (!input.compare(0, 5, "SEARCH", 5))
			search_inst(instance, idx);
		else
			std::cout << "Invalid instruction." << std::endl;
		
	}
}