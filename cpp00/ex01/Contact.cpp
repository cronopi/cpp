/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:17:17 by roberto           #+#    #+#             */
/*   Updated: 2023/12/07 18:01:16 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() // inicializar el objeto cuando se crea una instancia de la clase Contact
{
}

//  Si tu clase Contact adquiere recursos destruyelos en el destructor
Contact::~Contact()
{
}

std::string Contact::get_first_name(void)
{
	return (this->_first_name);
}

void Contact::set_first_name(std::string first_name)
{
	this->_first_name = first_name;
}

std::string Contact::get_last_name(void)
{
	return (this->_last_name);
}

void Contact::set_last_name(std::string last_name)
{
	this->_last_name = last_name;
}

std::string Contact::get_nickname(void)
{
	return (this->_nickname);
}

void Contact::set_nickname(std::string nickname)
{
	this->_nickname = nickname;
}

std::string Contact::get_number(void)
{
	return (this->_number);
}

void Contact::set_number(std::string number)
{
	this->_number = number;
}

std::string Contact::get_darkest_secret(void)
{
	return (this->_darkest_secret);
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}
