/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:10:08 by roberto           #+#    #+#             */
/*   Updated: 2023/12/05 13:17:30 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Phonebook.hpp"

int	main(void)
{
	Phonebook phone;
	std::string str;

	std::cout << "Welcome to the phonebook" << std::endl;
	while(1)
	{
		std::cout << "Waiting for a command";
		std::getline(std::cin, str);
		if (str == "ADD")
		{
			phone.add();
			std::cout << "añadiendo contacto..." << std::endl;
		}
		else if (str == "SEARCH")
		{
			std::cout << "buscando contactos" << std::endl;
			phone.search();
		}
		else if (str == "EXIT")
			break;
	}
	return (0);
}
