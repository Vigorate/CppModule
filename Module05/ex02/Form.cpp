/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:18:03 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/21 18:33:50 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) :
	_name("Base"),
	_signed(false),
	_execGrade(150),
	_signGrade(150),
	_target("Undefined") {}

Form::Form(std::string name, int execGrade, int signGrade, std::string target) :
	_name(name),
	_execGrade(execGrade),
	_signGrade(signGrade),
	_target(target)
{
	this->_signed = false;
	if (execGrade > 150 || signGrade > 150)
		throw Form::GradeTooLowException();
	if (execGrade < 1 || signGrade < 1)
		throw Form::GradeTooHighException();
}

Form::Form(Form const & src) : 
	_name(src.getName()),
	_execGrade(src.getExecGrade()),
	_signGrade(src.getSignGrade()),
	_signed(false) {}

Form::~Form(void)
{

}

void			Form::execute(Bureaucrat const &executor) const
{
	if (this->_signed == false)
		throw NotSigned();
	if (executor.getGrade() < this->_execGrade)
		throw GradeTooLowException();
}

Form&			Form::operator=(Form const & src)
{
	if (this == &src)
		return (*this);

	this->_signed = src.getSigned();
	return (*this);
}

std::string		Form::getName(void) const { return (this->_name); }

bool			Form::getSigned(void) const { return this->_signed; }

int				Form::getExecGrade(void) const { return this->_execGrade; }

int				Form::getSignGrade(void) const { return this->_signGrade; }

std::string		Form::getTarget(void) const { return this->_target; }

void			Form::beSigned(Bureaucrat &user)
{
	if (user.getGrade() > this->getSignGrade())
		throw Form::GradeTooLowException();
	std::cout << user.getName() << " signed " << this->_name << std::endl;
	this->_signed = true;
}

const char		*Form::GradeTooHighException::what() const throw()
{
	return ("Form has not been signed for execution.");
}

const char		*Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.");
}

const char		*Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.");
}

std::ostream    &operator<<(std::ostream &ostream, const Form &src)
{
	ostream << "Form named " << src.getName();
	if (src.getSigned())
		ostream << ", have been signed, ";
	else
		ostream << ", have not been signed, ";
	ostream << "have required execution grade of " << src.getExecGrade() << " and sign grade of " << src.getSignGrade() << std::endl;
	return (ostream);
}