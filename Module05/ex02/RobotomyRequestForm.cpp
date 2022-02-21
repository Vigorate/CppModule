/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:05:58 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/21 17:02:30 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest", 45, 72, target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}
