/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:05:58 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/22 15:37:10 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest", 45, 72, target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

void			RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
	std::srand(std::time(NULL));
	if (std::rand() % 2)
		std::cout << executor.getName() << " has been robotomized." << std::endl;
	else
		std::cout << executor.getName() << " robotomization has failed." << std::endl;
		
}