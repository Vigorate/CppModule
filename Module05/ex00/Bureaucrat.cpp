/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:01:19 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/21 14:05:46 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Base"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade > 150)
		throw	Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw	Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) { *this = src; }

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat&  Bureaucrat::operator=(Bureaucrat const & src)
{
	this->_grade = src.getGrade();
	this->_name = src.getName();
	return (*this);
}

void		Bureaucrat::incrementGrade(void)
{
	if (this->_grade - 1 < 1)
		throw	Bureaucrat::GradeTooHighException();
	--this->_grade;
}

void		Bureaucrat::decrementGrade(void)
{
	if (this->_grade + 1 > 150)
		throw	Bureaucrat::GradeTooLowException();
	++this->_grade;
}

std::string		Bureaucrat::getName(void) const { return this->_name; }

int				Bureaucrat::getGrade(void) const { return this->_grade; }

const char		*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.");
}

const char		*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.");
}

std::ostream    &operator<<(std::ostream &ostream, const Bureaucrat &src)
{
	ostream << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return (ostream);
}