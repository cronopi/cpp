/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:39:38 by rcastano          #+#    #+#             */
/*   Updated: 2024/12/01 21:46:39 by roberto          ###   ########.fr       */
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
	if (dynamic_cast<A*>(p) != NULL)
	{
		std::cout << "A" << std::endl;
	}
	else if ( dynamic_cast<B*>(p) != NULL)
	{
		std::cout << "B" << std::endl;
	}
	else if (dynamic_cast<C*>(p) != NULL)
	{
		std::cout << "C" << std::endl;
	}
}

void identify(Base& p)
{
	std::cout << "Identify by reference" << std::endl;
	try
	{
		dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception &e){}
	try
	{
		dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception &e){}
	try
	{
		dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception &e){}
}

int main(void)
{
	srand(time(NULL));
	Base *base_1 = generate();
	Base *base_2 = generate();
	identify(base_1);
	identify(base_2);

	identify(*base_1);
	identify(*base_2);

	delete base_2;
	delete base_1;
	return (0);
}
