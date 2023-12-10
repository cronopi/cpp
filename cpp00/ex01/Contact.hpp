/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:17:25 by roberto           #+#    #+#             */
/*   Updated: 2023/12/06 13:05:24 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP

#include <iostream>
# include <string>

class	Contact
{
	private:
	//attributes "variables" // como no tengo acceso a ellos(son privados) creo variables auxiliares
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_number;
		std::string	_darkest_secret;
	public:
		//constructors
		Contact();
		//destructor
		~Contact();
		//getters metodos  //son funciones
		std::string	get_first_name();
		std::string	get_last_name();
		std::string	get_nickname();
		std::string	get_number();
		std::string	get_darkest_secret();

		//setters asigna un valor a una variable
		void set_first_name(std::string first_name);
		void set_last_name(std::string last_name);
		void set_nickname(std::string nickname);
		void set_number(std::string number);
		void set_darkest_secret(std::string darkest_secret);
};

#endif
