/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:52:40 by rcastano          #+#    #+#             */
/*   Updated: 2024/05/10 11:15:11 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	uintptr_t	raw;
	Data	data;
	Data 	*ptr;

	data.name = "roberto";
	data.age = 25;
	data.height = 170;
	data.weight = 64;

	raw = Serializer::serialize(&data);
	ptr = Serializer::deserialize(raw);

	std::cout << "edad:" << ptr->age << " altura: " << ptr->height << std::endl;
	std::cout << "peso:" << ptr->weight << " nombre: " << ptr->name << std::endl;
	return (0);
}
