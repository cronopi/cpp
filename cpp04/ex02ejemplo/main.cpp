/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:15:09 by miguel            #+#    #+#             */
/*   Updated: 2021/09/09 20:02:05 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void) {

	Animal	*dog = new Dog();

	// Can not do this cause animal is abstract, it has a pure vitual member function
	//Animal	*animal = new Animal();

	delete dog;

	return (0);
}
