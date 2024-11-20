/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:12:19 by roberto           #+#    #+#             */
/*   Updated: 2024/11/20 15:49:58 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bur("Bob", 7);
		std::cout << bur << std::endl;
		Form	formulary("formulary", 1, 1);
		std::cout << formulary << std::endl;

		bur.signForm(formulary);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat bur("Bob", 7);
		std::cout << bur << std::endl;
		Form	formulary("formulary", 10, 1);
		std::cout << formulary << std::endl;

		bur.signForm(formulary);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat bur("Bob", 1);
		std::cout << bur << std::endl;
		Form	formulary("formulary", 1, 1);
		std::cout << formulary << std::endl;

		bur.signForm(formulary);
		bur.signForm(formulary);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
