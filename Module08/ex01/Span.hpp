/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:27:24 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/26 16:46:18 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <limits>
#include <climits>
#include <iostream>
#include <iterator>
#include <numeric>

class Span
{
	public:

		Span(void);
		Span(int);
		Span(const int &, const int &);
		Span(Span const & src);
		~Span(void);

		Span&	operator=(Span const & src);

		void	addNumber(int const &);

		int		shortestSpan(void);
		int		longestSpan(void);

		class	Spantoosmall : std::exception
		{
			const char	*what() const throw() { return "No Span are available."; }
		};
		class	Spanfull : std::exception
		{
			const char	*what() const throw() { return "Span is full."; }
		};

	private :
		unsigned int		_size;
		std::vector<int>	_vector;
};

