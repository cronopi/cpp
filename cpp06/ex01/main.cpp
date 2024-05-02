/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:52:40 by rcastano          #+#    #+#             */
/*   Updated: 2024/05/02 11:18:24 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{

	Data		data;
	uintptr_t	serialized;
	Data		*deserialized;

	data._id = 5;
	serialized = Serializer::serialize(&data);
	deserialized = Serializer::deserialize(serialized);

	if(deserialized == &data)
		std::cout << "el deserialized es igual al pointer original" << std::endl;
	else
		std::cout << "el deserialized NO es igual al pointer original" << std::endl;
	return (0);
}
