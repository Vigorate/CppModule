/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:54:40 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/01 15:10:45 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

Contact::Contact (void)
{
	
}

Contact::~Contact (void)
{
	
}

std::string		Contact::getinfo (int idx)
{
	return (this->info[idx]);
}

void			Contact::setinfo (std::string str, int idx)
{
	if (str.length() >= 10)
	{
		str = str.substr(idx, 9);
		str += '.';
	}
	else
	{
		str.append(10 - str.length(), ' ');
	}
	this->info[idx] = str;
}