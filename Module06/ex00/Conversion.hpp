/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:47:46 by amine             #+#    #+#             */
/*   Updated: 2022/02/24 14:19:01 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <iomanip>
#include <climits>
#include <string>

class Conversion
{
	public:

		Conversion(void);
		Conversion(std::string const &);
		Conversion(Conversion const & src);
		~Conversion(void);

		char	getChar(void) const;
		int		getInt(void) const;
		double	getDouble(void) const;
		float	getFloat(void) const;

		void	displayType(void) const;

		class UndisplayableConversion : public std::exception
		{
			const char *	what(void) const throw();
		};

		class ImpossibleConversion : public std::exception
		{
			const char *	what(void) const throw();
		};

		Conversion&		operator=(Conversion const & src);

	private :
		double		_value;
};
