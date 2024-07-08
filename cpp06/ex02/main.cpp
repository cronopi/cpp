/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:39:38 by rcastano          #+#    #+#             */
/*   Updated: 2024/05/21 11:26:08 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate(void)
{
    int i;

	i = rand() % 3;
	std::cout << i << std::endl;

	if (i == 0)
		return (new A);
	else if (i == 1)
		return (new B);
	else
		return (new C);
}

void identify(Base* p)
{
	if ( dynamic_cast<A*>(p))
	{
		std::cout << "A" << std::endl;
	}
	else if ( dynamic_cast<B*>(p))
	{
		std::cout << "B" << std::endl;
	}
	else (dynamic_cast<C*>(p))
	{
		std::cout << "C" << std::endl;
	}
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception &e)
	{
	}
	try
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception &e)
	{
	}
	try
	{
		C& c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception &e)
	{
	}

}

int main(void)
{
	srand(time(NULL));
	Base *ptr = generate();
	Base &ref = *ptr;
	identify(ptr);
	identify(ref);
	delete ptr;
	return (0);
}
