/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:27:25 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/24 18:52:35 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template< typename T>
class Array
{
	public:

		Array(void) : _array(NULL), _size(0) {}

		Array(unsigned int n)
		{
			_array = new T[n];
			for (unsigned int i = 0; i < n; ++i)
				_array[i] = 0;
			_size = n;
		}

		Array(Array<T> const & src)
		{
			_array = new T[src._size];
			for (unsigned int i = 0; i < src._size; ++i)
				_array[i] = src._array[i];
			_size = src._size;
			
		}

		~Array(void) {}

		Array		&operator=(Array const & src)
		{
			if (this == &src)
				return *this;
			_array = new T[src._size];
			for (unsigned int i = 0; i < src._size; ++i)
				_array[i] = src._array[i];
			_size = src._size;
			return *this;
		}

		T				&operator[](unsigned int idx)
		{
			if (idx >= _size)
				throw Array::Overflow();
			return _array[idx];
		}

		class Overflow : public std::exception
		{
			public:
				char const *what(void) const throw() { return "Cannot acces array at indexed value"; }
		};

		unsigned int	size(void) const { return _size; }

	private :
		T				*_array;
		unsigned int	_size;
};
