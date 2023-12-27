/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:15:09 by miguel            #+#    #+#             */
/*   Updated: 2021/09/13 12:13:23 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void) {

	Dog			dog;
	Animal		*animals[6];

	for (size_t i = 0; i < 6; i++) {
		if (i < 3)
			animals[i] = new Dog;
		else
			animals[i] = new Cat;
	}

	dog.getBrain()->addIdea("I want to play all day");
	Dog	cpydog(dog);
	std::string *ideas = cpydog.getBrain()->getIdeas();
	std::cout << ideas[0] << std::endl;

	for (size_t i = 0; i < 6; i++)
		delete animals[i];

	return (0);
}
