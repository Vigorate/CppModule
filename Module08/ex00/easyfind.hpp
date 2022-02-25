/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:13:35 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/25 18:23:10 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <iostream>
#include <list>

template< typename T>
void			easyfind(T cont, int val)
{
	if (*std::find(cont.begin(), cont.end(), val) == val)
	{
		std::cout << "Value : " << val << " has been found." << std::endl;
		return;
	}
	std::cout << "Value : " << val << " has not been found." << std::endl;
}