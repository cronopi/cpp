/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:12:19 by roberto           #+#    #+#             */
/*   Updated: 2024/11/08 12:10:10 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bur("Bob", 1);
	try
	{
		bur.increment();
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	//bur.increment(); //para comprobar que peta sin el try catch y aborta al ejecutar
	try
	{
		bur.decrement();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << bur << std::endl;
	bur.decrement();
	std::cout << bur << std::endl;

	return (0);


}
