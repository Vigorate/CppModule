/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:27:24 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/25 19:38:12 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>

class Span
{
	public:

		Span(int);
		Span(Span const & src);
		~Span(void);

		Span&	operator=(Span const & src);

		void	addNumber(int const &);

		int		shortestSpan(void) const;
		int		longestSpan(void) const;

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
		std::list<int>		_list;
};

