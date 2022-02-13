/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:31:52 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/13 14:54:40 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Fixed
{
	public:

		Fixed(void);
		Fixed(int const nbr);
		Fixed(float const nbr);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed&	operator=(Fixed const & src);

		int		getRawBits(void) const;
		void	setRawBits(const int raw);

		float	toFloat(void) const;
		int		toInt(void) const;

	private :
		int		fixed_decimal;
		static const int n_bits = 8;
};

std::ostream	&operator<<(std::ostream &ostream, const Fixed &src);