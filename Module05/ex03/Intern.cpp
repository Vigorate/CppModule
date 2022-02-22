/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:05:16 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/22 16:35:34 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(Intern const & src) { *this = src; }

Intern::~Intern(void) {}

Intern&  Intern::operator=(Intern const & src) { (void)src; return (*this); }

Form		*Intern::makeForm(std::string const &name, std::string const &target) const
{
	t_fm	form_mask[3] = { 
		{"presidential form", new PresidentialPardonForm(target)},
		{"robotomy request", new RobotomyRequestForm(target)},
		{"shrubbery creation", new ShrubberyCreationForm(target)}};
	int		is = 4;

	for (int i = 0; i < 3; ++i)
	{
		if (name == form_mask[i].type)
			is = i;
		else
			delete form_mask[i].form;
	}
	if (is == 4)
	{
		std::cout << "Intern could not create form " << name << std::endl;
		return (NULL);
	}
	std::cout << "Intern creates " << name << std::endl;
	return (form_mask[is].form);
}