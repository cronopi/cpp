/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:18:30 by rcastano          #+#    #+#             */
/*   Updated: 2024/05/02 11:20:49 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER
# define SERIALIZER

#include <string>
#include <iostream>
#include<cstdint>

struct Data {
	int	_id;
};

class Serializer
{
	private:

	public:
		Serializer();
		~Serializer();
		Serializer(Serializer &src);
		Serializer &operator=(const Serializer &src);

		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif
