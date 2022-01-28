/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:43:29 by ambelkac          #+#    #+#             */
/*   Updated: 2022/01/28 19:42:20 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook (void)
{
	
}

PhoneBook::~PhoneBook (void)
{
	
}

void		PhoneBook::add_instruction(int idx)
{
	std::cout << "Please enter first name : ";
	getline(std::cin, this->line);
	(this->getContact(idx))->setinfo(this->line, 0);
	std::cout << "Please enter last name : ";
	getline(std::cin, this->line);
	(this->getContact(idx))->setinfo(this->line, 1);
	std::cout << "Please enter nickname : ";
	getline(std::cin, this->line);
	(this->getContact(idx))->setinfo(this->line, 2);
	std::cout << "Please enter phone number : ";
	getline(std::cin, this->line);
	(this->getContact(idx))->setinfo(this->line, 3);
	std::cout << "Please enter darkest secret : ";
	getline(std::cin, this->line);
	(this->getContact(idx))->setinfo(this->line, 4);
}

void		PhoneBook::search_instruction(int idx)
{
	for (int i = 0; i < idx; ++i)
	{
		std::cout << "Contact nbr : " << i << std::endl;
		for (int j = 0; j < 5; ++j)
		{
			if (this->contact[i].getinfo(j).length < 10)
			{
				std::cout << this->contact[i].getinfo(j);
				for (int k = 0; k < 10 - this->contact[i].getinfo(j).length )
			}
			else
			{
				
			}
			std::cout << this->contact[i].getinfo(j);
			if (i != 4)
				std::cout << "|";
		}
		std::cout << std::endl;
	}
}

Contact		*PhoneBook::getContact (int idx)
{
	return (&this->contact[idx]);
}
