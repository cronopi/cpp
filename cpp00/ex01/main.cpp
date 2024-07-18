/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:10:08 by roberto           #+#    #+#             */
/*   Updated: 2024/07/12 13:53:44 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	std::string str;
	Phonebook phone;

	std::cout << "Welcome to the phonebook" << std::endl;
	while(1)
	{
		std::cout << "Waiting for a command: " << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
		{
            std::cout << "Fin de entrada detectado. Saliendo del bucle." << std::endl;
            break;
        }
		if (str == "ADD")
		{
			std::cout << "añadiendo contacto..." << std::endl;
			phone.add_contact();
		}
		else if (str == "SEARCH")
		{
			std::cout << "buscando contactos" << std::endl;
			phone.search_contact();
		}
		else if (str == "EXIT")
			break;
	}
	return (0);
}

