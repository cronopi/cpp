/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:18:30 by rcastano          #+#    #+#             */
/*   Updated: 2024/04/17 15:10:58 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER
# define SERIALIZER

#include <string>
#include <iostream>

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