/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:16:58 by roberto           #+#    #+#             */
/*   Updated: 2024/07/04 10:30:20 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	this->_index = 0;
	this->_n_of_contacts = 0;
}

Phonebook::~Phonebook()
{
}
void Phonebook::add_contact()
{
	std::string input;
	bool b = true;

	std::cout << "First name: ";
	std::cin >> input;
	this->_contacts[this->_index].set_first_name(input);
	std::cout << "Last name: ";
	std::cin >> input;
	this->_contacts[this->_index].set_last_name(input);
	std::cout << "Nickname: ";
	std::cin >> input;
	this->_contacts[this->_index].set_nickname(input);
	do
	{
		if (b == false)
			std::cout << "Wrong phone number" << std::endl;
		b = true;
		std::cout << "Phone number: ";
		std::cin >> input;
		for(long unsigned int i = 0; i < input.length(); i++)
		{
			if(!isdigit(input[i]))
			{
				b = false;
			}
		}
	}
	while (b == false);
	this->_contacts[this->_index].set_number(input);
	std::cout << "Darkest secret: ";
	std::cin >> input;
	this->_contacts[this->_index].set_darkest_secret(input);
	this->_index++;
	if (this->_index == 8)
		this->_index = 0;
	else
		this->_n_of_contacts++;
}
void Phonebook::search_contact()
{
	int i = 0;
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << std::endl;
	while (i < this->_n_of_contacts)
	{
		std::cout << std::setw(10) << "    -----------------------------------------" << std::endl;
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << this->_contacts[i].get_first_name().substr(0, 9) + (this->_contacts[i].get_first_name().length() > 9 ? "." : "")<< "|";
		std::cout << std::setw(10) << this->_contacts[i].get_last_name().substr(0, 9) + (this->_contacts[i].get_last_name().length() > 9 ? "." : "")<< "|";
		std::cout << std::setw(10) << this->_contacts[i].get_nickname().substr(0, 9) + (this->_contacts[i].get_nickname().length() > 9 ? "." : "") << std::endl;
		i++;
	}
	std::cout << std::setw(10) << "    -----------------------------------------" << std::endl;
}
