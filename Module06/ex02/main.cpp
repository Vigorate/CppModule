/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:31:11 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/23 20:50:59 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>

class Base { 
	public:
		virtual ~Base(){}
};

class A:	public Base{};
class B:	public Base{};
class C:	public Base{};

int		roll(void)
{
	srand(time(NULL));
	return (rand() % 3) + 1;
}

Base	*generate(void)
{
	int		type = roll();

	if (type == 1)
		return new A();
	if (type == 2)
		return new B();
	if (type == 3)
		return new C();
	return (NULL);
}

void	identify(Base *type)
{
	Base	ptr;

	try
	{
		ptr = dynamic_cast<A &>(*type);
		std::cout << "Pointed Base is actually A" << std::endl;
		return ;
	}
	catch (std::exception &e) {}

	try
	{
		ptr = dynamic_cast<B &>(*type);
		std::cout << "Pointed Base is actually B" << std::endl;
		return ;
	}
	catch (std::exception &e) {}

	try
	{
		ptr = dynamic_cast<C &>(*type);
		std::cout << "Pointed Base is actually C" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
}

void	identify(Base &type)
{
	Base	ptr;

	try
	{
		ptr = dynamic_cast<A &>(type);
		std::cout << "Refferenced Base is actually A" << std::endl;
		return ;
	}
	catch (std::exception &e) {}

	try
	{
		ptr = dynamic_cast<B &>(type);
		std::cout << "Refferenced Base is actually B" << std::endl;
		return ;
	}
	catch (std::exception &e) {}

	try
	{
		ptr = dynamic_cast<C &>(type);
		std::cout << "Refferenced Base is actually C" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
}

int		main(void)
{
	Base	*ptr = generate();
	Base	&ref = *ptr;

	identify(ref);
	identify(ptr);
	return (0);
}