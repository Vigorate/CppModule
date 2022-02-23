/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amine <amine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:01:23 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/23 00:59:52 by amine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Bureaucrat
{
	public:

		Bureaucrat(void);
		Bureaucrat(std::string, int);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);

		Bureaucrat&     operator=(Bureaucrat const & src);

		std::string			getName(void) const;
		int					getGrade(void) const;

		void				incrementGrade(void);
		void				decrementGrade(void);

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

std::ostream    &operator<<(std::ostream &ostream, const Bureaucrat &src);