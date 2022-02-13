/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:31:52 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/13 15:59:37 by ambelkac         ###   ########.fr       */
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

		Fixed	&max(Fixed &a, Fixed &b);
		Fixed	&min(Fixed &a, Fixed &b);
		const static Fixed	&max(const Fixed &a, const Fixed &b);
		const static Fixed	&min(const Fixed &a, const Fixed &b);
		

		Fixed	operator+(Fixed const & rhs) const;
		Fixed	operator-(Fixed const & rhs) const;
		Fixed	operator*(Fixed const & rhs) const;
		Fixed	operator/(Fixed const & rhs) const;
		
		bool	operator!=(Fixed const & rhs) const;
		bool	operator==(Fixed const & rhs) const;
		bool	operator>=(Fixed const & rhs) const;
		bool	operator<=(Fixed const & rhs) const;
		bool	operator<(Fixed const & rhs) const;
		bool	operator>(Fixed const & rhs) const;

		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator++(int n);
		Fixed	operator--(int n);

	private :
		int		fixed_decimal;
		static const int n_bits = 8;
};

std::ostream	&operator<<(std::ostream &ostream, const Fixed &src);