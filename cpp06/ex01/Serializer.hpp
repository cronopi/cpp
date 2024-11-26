/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:18:30 by rcastano          #+#    #+#             */
/*   Updated: 2024/11/26 15:07:28 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <stdint.h>

struct Data {
	int	_id;
	std::string _name;
};

class Serializer
{
	private:
		Serializer();
		~Serializer();
		Serializer(Serializer &src);
		Serializer &operator=(const Serializer &src);

	public:
 		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
