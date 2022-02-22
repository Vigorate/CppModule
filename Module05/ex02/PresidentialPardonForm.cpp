/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:05:55 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/22 15:28:57 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form() {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon", 5, 25, target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src) {}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

void			PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
	std::cout << executor.getName() << " a été pardonnée par Zaphod Beeblebrox." << std::endl;
}