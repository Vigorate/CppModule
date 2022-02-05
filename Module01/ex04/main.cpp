/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amine <amine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:04:53 by amine             #+#    #+#             */
/*   Updated: 2022/02/05 23:42:02 by amine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (1);
	}

	std::ifstream	ifs(av[1]);


	if (!ifs)
	{
		std::cout << "Could not open file" << std::endl;
		return (1);
	}

	std::string		n_file_name = av[1];

	n_file_name += ".replace";

	std::ofstream	ofs(n_file_name);
	if (!ofs)
	{
		std::cout << "Could not create file" << std::endl;
		return (1);
	}


	std::string		line;
	std::string		arg1 = av[2];
	std::string		arg2 = av[3];

	size_t	pos = 0;


	while (getline(ifs, line))
	{
		while ((pos = line.find(arg1, pos)) != std::string::npos)
		{
			line.erase(pos, arg1.length());
			line.insert(pos, arg2);
			pos += arg2.length();
		}
		pos = 0;
		ofs << line;
		ofs << std::endl;
	}
	ifs.close();
	ofs.close();
}