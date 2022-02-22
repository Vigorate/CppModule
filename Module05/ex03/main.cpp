/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:00:58 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/22 16:35:57 by ambelkac         ###   ########.fr       */
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
	std::cout << "here" << std::endl;
	Third = (ShrubberyCreationForm *)First.makeForm("schrubbery creation", "Garden");
	Bu.signForm(*Third);
	Bu.executeForm(*Third);
	
	delete Third;
	return (0);
}