/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:18:30 by rcastano          #+#    #+#             */
/*   Updated: 2024/05/13 11:45:58 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

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

		static int	serialize(Data* ptr);
		static Data*		deserialize(int raw);
};

#endif
