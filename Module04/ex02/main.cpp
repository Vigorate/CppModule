/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:44:58 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/17 18:11:22 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"

int main()
{
	Cat* i = new Cat();
	Dog* j = new Dog();

	i->makeSound();
	j->makeSound();

	i->getBrain()->ideas[0] = "Cat thought.";
	j->getBrain()->ideas[0] = "Dog thought.";
	
	std::cout << "Cat named i thought : " << i->getBrain()->ideas[0] << std::endl;
	std::cout << "Dog named j thought : " << j->getBrain()->ideas[0] << std::endl;

	Dog *dog_copy = new Dog((const Dog)*j);

	std::cout << "Dog copy thought : " << dog_copy->getBrain()->ideas[0] << std::endl;

	delete dog_copy;
	delete i;
	delete j;
	return 0;
}