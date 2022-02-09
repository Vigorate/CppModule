/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:30:08 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/09 14:02:44 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int		main(void)
{
	std::string		string = "HI THIS IS BRAIN";

	std::string		*stringPTR = &string;
	std::string		&stringREF = string;

	std::cout << "This is string address : " << &string << std::endl;
	std::cout << "This is stringPTR address : " << stringPTR << std::endl;
	std::cout << "This is stringREF address : " << &stringREF << std::endl << std::endl;

	std::cout << "This is string value : " << string << std::endl;
	std::cout << "This is stringPTR value : " << *stringPTR << std::endl;
	std::cout << "This is stringREF value : " << stringREF << std::endl;
}