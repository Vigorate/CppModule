/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:17:49 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/21 14:39:15 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Form;
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Form
{
	public:

		Form(void);
		Form(std::string, int, int);
		Form(Form const & src);
		~Form(void);

		Form&		operator=(Form const & src);

		std::string	getName(void) const;
		bool		getSigned(void) const;
		int			getExecGrade(void) const;
		int			getSignGrade(void) const;

		void		beSigned(Bureaucrat &);

		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw();
		};
		class AlreadySignedException : public std::exception
		{
			virtual const char *what() const throw();
		};

	private :
		std::string		_name;
		bool			_signed;
		int				_execGrade;
		int				_signGrade;
};

std::ostream    &operator<<(std::ostream &ostream, const Form &src);