/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:44:58 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/17 17:06:25 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	Animal *array_of_animals[2];

	array_of_animals[0] = new Dog();
	array_of_animals[1] = new Cat();
	
	array_of_animals[0]->getBrain()->ideas[0] = "Dog Idea";
	
	std::cout << array_of_animals[0]->getBrain()->ideas[0] << std::endl;

	Dog		*Samuel =  new Dog(*(const Dog*)(array_of_animals[0]));

	std::cout << Samuel->getBrain()->ideas[0] << std::endl;

	delete array_of_animals[0];
	delete array_of_animals[1];
	delete Samuel;
	delete i;
	delete j;
	return 0;
}