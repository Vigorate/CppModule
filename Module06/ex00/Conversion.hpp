/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amine <amine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:47:46 by amine             #+#    #+#             */
/*   Updated: 2022/02/23 18:10:49 by amine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <cmath>
#include <cctype>
#include <iomanip>

class Conversion
{
	public:

		Conversion(void);
		Conversion(std::string const &);
		Conversion(Conversion const & src);
		~Conversion(void);

		char		getChar(void) const;
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
