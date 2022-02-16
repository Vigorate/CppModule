/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:44:58 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/16 21:23:55 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	const WrongAnimal* k = new WrongCat();
	const WrongAnimal* l = new WrongAnimal();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	k->makeSound();
	l->makeSound();

	meta->makeSound();
	return 0;
}