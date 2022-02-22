/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amine <amine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:00:58 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/23 00:56:39 by amine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int		main(void)
{
	Intern		First;
	Bureaucrat	Bu("Boss", 1);
	Form		*Second;
	ShrubberyCreationForm		*Third;

	Second = First.makeForm("Unkown", "Random");
	Third = (ShrubberyCreationForm *)First.makeForm("shrubbery creation", "Garden");
	Bu.signForm(*Third);
	Bu.executeForm(*Third);

	delete Third;
	return (0);
}