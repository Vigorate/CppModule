/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:23:39 by amine             #+#    #+#             */
/*   Updated: 2022/02/09 14:38:59 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void) {
	std::cout << "Karen created." << std::endl;
}

Karen::~Karen(void) {
	std::cout << "Karen destroyed." << std::endl;
}

void	Karen::_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void	Karen::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
}

void	Karen::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Karen::_error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level)
{

	t_comp		complain[4] = {
		{"DEBUG", &Karen::_debug},
		{"INFO", &Karen::_info},
		{"WARNING", &Karen::_warning},
		{"ERROR", &Karen::_error}
		};

	void	(Karen::*func)(void);

	for (int i = 0; i < 4; ++i)
	{
		if (!level.compare(complain[i].str))
		{
			std::cout << "[ " << complain[i].str << " ]" << std::endl;
			func = complain[i].f;
			(this->*func)();
			return ;
		}
	}
	std::cout << "Behavior not found" << std::endl;
}