/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:17:49 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/18 19:24:27 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Form
{
	public:

		Form(void);
		Form(std::string, int, int)
		Form(Form const & src);
		~Form(void);

		Form&			operator=(Form const & src);

		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
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