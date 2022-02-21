/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:01:23 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/21 14:39:05 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Bureaucrat;
#include "Form.hpp"
#include <iostream>
#include <string>

class Bureaucrat
{
	public:

		Bureaucrat(void);
		Bureaucrat(std::string, int);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);

		Bureaucrat&			operator=(Bureaucrat const & src);

		std::string			getName(void) const;
		int					getGrade(void) const;

		void				incrementGrade(void);
		void				decrementGrade(void);

		void				signForm(Form &);

		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw();
		};

	private :
		std::string			_name;
		int					_grade;
};

std::ostream		&operator<<(std::ostream &ostream, const Bureaucrat &src);