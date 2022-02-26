/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:27:22 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/26 16:48:41 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _size(0), _vector(0) {}

Span::Span(int size) : _size(size) {}

Span::Span(Span const & src)
{
	_size = src._size;
	_vector = src._vector;
}

Span::Span(const int &start, const int &end) :
	_size(end - start),
	_vector(std::vector<int>(_size))
{
	if (start < end)
		std::iota(_vector.begin(), _vector.end(), start);
	else
	{
		std::iota(_vector.begin(), _vector.end(), end);
		_vector.reverse();
	}
}

Span::~Span(void) {}

void		Span::addNumber(int const &nbr)
{
	if (_vector.size() == _size)
		throw Span::Spanfull();
	_vector.push_back(nbr);
}

int			Span::longestSpan(void)
{
	if (_vector.size() <= 1)
		throw Span::Spantoosmall();

	int		max = *std::max_element(_vector.begin(), _vector.end());
	int		min = *std::min_element(_vector.begin(), _vector.end());

	return max - min;
}

int			Span::shortestSpan(void)
{
	if (_vector.size() <= 1)
		throw Span::Spantoosmall();
	std::sort(_vector.begin(), _vector.end());
	unsigned int shortest = _vector[1] - _vector[0];
	unsigned int distance = 0;

	for (unsigned int i = 1; i < _vector.size(); i++)
	{
		distance = _vector[i] - _vector[i - 1];
		if (distance < shortest)
			shortest = distance;
	}
	return (shortest);
}

Span&  Span::operator=(Span const & src)
{
	if (&src == this)
		return *this;
	_size = src._size;
	_vector = src._vector;
	return *this;
}
