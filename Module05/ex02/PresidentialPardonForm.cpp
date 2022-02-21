/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:05:55 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/21 17:02:05 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form()
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon", 5, 25, target)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
{

}

PresidentialPardonForm::~PresidentialPardonForm(void)
{

}

PresidentialPardonForm&  PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
	return (*this);
}
