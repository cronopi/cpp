/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:12:19 by roberto           #+#    #+#             */
/*   Updated: 2024/11/15 12:37:16 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{

	Bureaucrat bur("Bob", 1);
	std::cout << bur << std::endl;

	try
	{
		Form	formulary("formulary", 1, 1);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Form	formulary("formulary", 1, 1);
	std::cout << formulary;

	bur.signForm(formulary);
	bur.signForm(formulary);


	return (0);
}
