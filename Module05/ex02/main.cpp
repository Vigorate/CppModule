/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:00:58 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/22 16:00:32 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"


int		main(void)
{
	Bureaucrat	First("John", 1);
	Bureaucrat	Bad("Brad", 150);
	ShrubberyCreationForm	Second("Garden");
	PresidentialPardonForm	Third("Fred");
	RobotomyRequestForm		Forth("Alex");
	ShrubberyCreationForm	NotSigned("Test");
	RobotomyRequestForm		Copy(Forth);

	Bad.signForm(Second);
	Bad.signForm(Third);
	Bad.signForm(Forth);

	First.signForm(Second);
	First.signForm(Third);
	First.signForm(Forth);

	Bad.executeForm(Second);
	Bad.executeForm(Third);
	Bad.executeForm(Forth);
	Bad.executeForm(NotSigned);
	NotSigned = Second;
	Bad.executeForm(NotSigned);
	Bad.executeForm(Copy);

	First.executeForm(Second);
	First.executeForm(Third);
	First.executeForm(Forth);
	First.executeForm(NotSigned);

	return (0);
}