/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:18:03 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/18 19:27:23 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Base"), _signed(false), _execGrade(150), _signGrade(150) {}

Form::Form(std::string name, int execGrade, int signGrade) _name(name), _execGrade(execGrade), _signGrade(signGrade)
{
	if (execGrade > 150 || signGrade > 150)
		throw Form::GradeTooLowException();
	if (execGrade < 1 || signGrade < 1)
		throw Form::GradeTooHighException();
}

Form::Form(Form const & src)
{

}

Form::~Form(void)
{

}

Form&  Form::operator=(Form const & src)
{
	return (*this);
}

std::ostream    &operator<<(std::ostream &ostream, const Form &src)
{
	ostream << "Form";
	return (ostream);
}