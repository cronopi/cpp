/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:52:40 by rcastano          #+#    #+#             */
/*   Updated: 2024/05/02 18:07:54 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{

	Data		data;
	int			serialized;
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
