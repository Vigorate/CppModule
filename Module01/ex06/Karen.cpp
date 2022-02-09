/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:23:39 by amine             #+#    #+#             */
/*   Updated: 2022/02/09 15:23:46 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(std::string filter) : _filter(filter)
{

}

Karen::~Karen(void) 
{

}

void	Karen::_debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
	std::cout << std::endl;
}

void	Karen::_info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
	std::cout << std::endl;
}

void	Karen::_warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Karen::_error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

bool	Karen::complain(std::string level)
{

	t_comp		complain[4] = {
		{"DEBUG", &Karen::_debug},
		{"INFO", &Karen::_info},
		{"WARNING", &Karen::_warning},
		{"ERROR", &Karen::_error}
		};

	bool	lever = false;

	for (int i = 0; i < 4; ++i)
	{
		if (lever == false && !level.compare(complain[i].str))
			lever = true;
		if (lever == true)
		{
			switch (i)
			{
			case 0:
				this->_debug();
				break;
			case 1:
				this->_info();
				break;
			case 2:
				this->_warning();
				break;
			case 3:
				this->_error();
				break;
			default:
				break;
			}
		}
	}
	return (lever);
}