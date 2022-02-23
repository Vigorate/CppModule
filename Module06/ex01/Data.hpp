/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amine <amine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:57:06 by amine             #+#    #+#             */
/*   Updated: 2022/02/23 18:17:32 by amine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdint>
#include <iostream>

class Data
{
	public:

		Data(void);
		Data(int, std::string);
		Data(Data const & src);
		~Data(void);

		int				getInt(void) const;
		std::string		getString(void) const;

		Data&     operator=(Data const & src);

	private :
		int				_n;
		std::string		_s;
};
