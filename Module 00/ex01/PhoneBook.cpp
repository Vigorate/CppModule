/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:43:29 by ambelkac          #+#    #+#             */
/*   Updated: 2022/01/28 17:08:26 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook (void)
{
	
}

PhoneBook::~PhoneBook (void)
{
	
}

void		PhoneBook::setContact (Contact contact, int idx)
{
	(void)contact;
	(void)idx;
}

Contact		PhoneBook::getContact (int idx) const
{
	return (this->contact[idx]);
}
