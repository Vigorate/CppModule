/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:18:03 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/21 14:41:57 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Base"), _signed(false), _execGrade(150), _signGrade(150) {}

Form::Form(std::string name, int execGrade, int signGrade)
{
	this->_name = name;
	this->_execGrade = execGrade;
	this->_signGrade = signGrade;
	this->_signed = false;
	if (execGrade > 150 || signGrade > 150)
		throw Form::GradeTooLowException();
	if (execGrade < 1 || signGrade < 1)
		throw Form::GradeTooHighException();
}

Form::Form(Form const & src)
{
	this->_name = src.getName();
	this->_execGrade = src.getExecGrade();
	this->_signGrade = src.getSignGrade();
	this->_signed = src.getSigned();
}

Form::~Form(void)
{

}

Form&  Form::operator=(Form const & src)
{
	this->_name = src.getName();
	this->_execGrade = src.getExecGrade();
	this->_signGrade = src.getSignGrade();
	this->_signed = src.getSigned();
	return (*this);
}

std::string		Form::getName(void) const { return (this->_name); }

bool			Form::getSigned(void) const { return this->_signed; }

int				Form::getExecGrade(void) const { return this->_execGrade; }

int				Form::getSignGrade(void) const { return this->_signGrade; }

void			Form::beSigned(Bureaucrat &user)
{
	if (this->_signed == true)
		throw Form::AlreadySignedException();
	else if (user.getGrade() > this->getSignGrade())
		throw Form::GradeTooLowException();
	std::cout << user.getName() << " signed " << this->_name << std::endl;
	this->_signed = true;
}

const char		*Form::AlreadySignedException::what() const throw()
{
	return ("Form already signed.");
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