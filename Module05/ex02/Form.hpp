/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:17:49 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/21 18:32:02 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Form;
#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>
#include <string>

class Form
{
	public:

		Form(void);
		Form(std::string, int, int, std::string);
		Form(Form const & src);
		~Form(void);

		Form&		operator=(Form const & src);

		std::string	getName(void) const;
		bool		getSigned(void) const;
		int			getExecGrade(void) const;
		int			getSignGrade(void) const;
		std::string	getTarget(void) const;

		void		beSigned(Bureaucrat &);

		virtual void	execute(Bureaucrat const &executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw();
		};
		class NotSigned : public std::exception
		{
			virtual const char *what() const throw();
		};
	
	private :
		const std::string		_name;
		bool			_signed;
		const int				_execGrade;
		const int				_signGrade;
		const std::string		_target;
};

std::ostream    &operator<<(std::ostream &ostream, const Form &src);