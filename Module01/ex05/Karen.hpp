/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amine <amine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:24:08 by amine             #+#    #+#             */
/*   Updated: 2022/02/06 02:43:08 by amine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Karen
{
private:
	void	(Karen::array)();
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
public:
	Karen(/* args */);
	~Karen();
	void	complain(std::string level)
};
