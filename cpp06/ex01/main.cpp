/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:52:40 by rcastano          #+#    #+#             */
/*   Updated: 2024/11/26 15:10:40 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{

	Data		*data = new Data();
	uintptr_t	serialized;
	Data		*deserialized;

	data->_id = 057;
	data->_name = "Roberto";
	serialized = Serializer::serialize(data);
	deserialized = Serializer::deserialize(serialized);

	if(deserialized == data)
		std::cout << "el deserialized es igual al pointer original" << std::endl;
	else
		std::cout << "el deserialized NO es igual al pointer original" << std::endl;
	delete data;
	return (0);
}
