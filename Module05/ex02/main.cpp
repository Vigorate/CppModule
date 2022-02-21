/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:00:58 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/21 14:47:03 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	Form		Basic;
	Form		High("Visa", 100, 50);
	Bureaucrat	First("John", 51);

	try
	{
		Form Test("Paper", 0, 100);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		Form Test("Paper", 100, 151);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	First.signForm(High);

	First.incrementGrade();

	First.signForm(High);

	First.signForm(High);
	return (0);
}