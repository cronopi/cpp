/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:10:02 by rcastano          #+#    #+#             */
/*   Updated: 2024/05/02 18:07:44 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	
}

Serializer::~Serializer()
{
	
}

Serializer::Serializer(Serializer &src)
{
	(void)src;
}

Serializer& Serializer::operator=(const Serializer &src)
{
	(void)src;
	return (*this);
}

int	Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}
Data*		Serializer::deserialize(int raw)
{
	return (reinterpret_cast<Data*>(raw));
}
