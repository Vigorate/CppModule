/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:43:29 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/01 17:17:39 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
	this->getContact(idx)->setinfo(this->line, 0);
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

int			is_number(std::string str)
{
	for (long unsigned int i = 0; i < str.length(); ++i)
	{
		if (!(std::isdigit(str.at(i))))
			return (1);
	}
	return (0);
}

void		PhoneBook::search_instruction(int idx)
{
	std::string	input;
	int		in_idx;

	for (int i = 0; i < idx; ++i)
	{
		std::cout << i << "         |";
		for (int j = 0; j < 3; ++j)
		{
			std::cout << this->contact[i].getinfo(j);
			if (j != 2)
				std::cout << "|";
		}
		std::cout << std::endl;
	}
	std::cout << "Please enter desired contact index" << std::endl;
	getline(std::cin, input);
	if (is_number(input))
	{
		std::cout << "You have inputed a non numeric argument" << std::endl;
		return ;
	}
	std::cout << "Just inputed : " << input << std::endl;
	in_idx = std::stoi(input);
	std::cout << "You have inputed : " << in_idx << std::endl;
	if (in_idx >= 0 && in_idx < idx)
	{
		for(int i = 0; i < 5; ++i)
			std::cout << this->contact[in_idx].getinfo(i) << std::endl;
	}
	else
		std::cout << "This index does correspond with an existing contact" << std::endl;
}

Contact		*PhoneBook::getContact (int idx)
{
	return (&this->contact[idx]);
}
