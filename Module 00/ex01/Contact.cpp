/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:54:40 by ambelkac          #+#    #+#             */
/*   Updated: 2022/01/28 17:40:24 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.class.hpp"

Contact::Contact (void)
{
	
}

Contact::~Contact (void)
{
	
}

std::string	Contact::getinfo (int idx)
{
	return (this->info[idx]);
}

void		Contact::setinfo (std::string str, int idx)
{
	this->info[idx].assign(str);
}