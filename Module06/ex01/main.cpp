/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amine <amine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:57:45 by amine             #+#    #+#             */
/*   Updated: 2022/02/23 18:18:16 by amine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
	Data dat(10, "Test");

	uintptr_t tmp = serialize(&dat);

	std::cout << "Serialize       : " << tmp << std::endl;
	std::cout << "Deserialize     : " << deserialize(tmp) << std::endl << std::endl;

	std::cout << "Re Serialize    : " << serialize(deserialize(tmp)) << std::endl;
	std::cout << "Re DeSerialize  : " << deserialize(serialize(deserialize(tmp))) << std::endl << std::endl;
	std::cout << "Get string	  : " << deserialize(serialize(deserialize(tmp)))->getString() << std::endl << std::endl;

	std::cout << "Serialize???    : " << deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(tmp))))))))))))))))))))))))) << std::endl;
	return (0);
}