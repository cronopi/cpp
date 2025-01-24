/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:16:58 by roberto           #+#    #+#             */
/*   Updated: 2024/07/22 12:43:16 by roberto          ###   ########.fr       */
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

std::string Tabs_to_spaces(std::string input)
{
	std::string tmp;
	std::regex const tab(R"(\t)");

	std::regex_replace(std::back_inserter(tmp), std::begin(input), std::end(input), tab,"    ");
	return (tmp);
}
bool Phonebook::ft_empty(std::string input, bool b)
{
	if (std::cin.eof())
	{
		std::cout << "Fin de entrada detectado. Saliendo del bucle." << std::endl;
		std::exit (1);
	}
	if (input.empty())
	{
		std::cout << "It can't be empty" << std::endl;
		return (false);
	}
	for (long unsigned int i = 0; i < input.length(); i++)
	{
		if (std::isalnum(input[i]))
			return (true);
	}
	b = false;
	return (b);
}
void Phonebook::add_contact()
{
	std::string input;
	bool b = true;
	do
	{
		if (b == false)
			std::cout << "Wrong first name" << std::endl;
		b = true;
		std::cout << "First name: " << std::endl;
		std::getline(std::cin, input);
		input = Tabs_to_spaces(input);
		b = ft_empty(input, b);
	}
	while (b == false);
	this->_contacts[this->_index].set_first_name(input);
	do
	{
		if (b == false)
			std::cout << "Wrong last name" << std::endl;
		b = true;
		std::cout << "last name: " << std::endl;
		std::getline(std::cin, input);
		input = Tabs_to_spaces(input);
		b = ft_empty(input, b);
	}
	while (b == false);
	this->_contacts[this->_index].set_last_name(input);
	do
	{
		if (b == false)
			std::cout << "Wrong nickname" << std::endl;
		b = true;
		std::cout << "nickname: " << std::endl;
		std::getline(std::cin, input);
		input = Tabs_to_spaces(input);
		b = ft_empty(input, b);
	}
	while (b == false);
	this->_contacts[this->_index].set_nickname(input);
	do
	{
		if (b == false)
			std::cout << "Wrong phone number" << std::endl;
		b = true;
		std::cout << "phone number: " << std::endl;
		std::getline(std::cin, input);
		input = Tabs_to_spaces(input);
		b = ft_empty(input, b);
		for(long unsigned int i = 0; i < input.length(); i++)
		{
			if(!isdigit(input[i]))
				b = false;
		}
	}
	while (b == false);
	this->_contacts[this->_index].set_number(input);
	do
	{
		if (b == false)
			std::cout << "Wrong Darkest secret" << std::endl;
		b = true;
		std::cout << "Darkest secret: " << std::endl;
		std::getline(std::cin, input);
		input = Tabs_to_spaces(input);
		b = ft_empty(input, b);
	}
	while (b == false);
		this->_contacts[this->_index].set_darkest_secret(input);
	this->_index++;
	if (this->_index == 8)
		this->_index = 0;
	else if (this->_n_of_contacts < 8)
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
