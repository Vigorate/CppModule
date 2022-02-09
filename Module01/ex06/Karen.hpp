/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:24:08 by amine             #+#    #+#             */
/*   Updated: 2022/02/09 14:58:36 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Karen
{
	private:
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);
		std::string		_filter;
	public:
		Karen(std::string filter);
		~Karen();
		bool	complain(std::string level);
};

typedef struct	s_complain
{
	std::string	str;
	void		(Karen::*f)();
}				t_comp;