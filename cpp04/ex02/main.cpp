/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:48:39 by roberto           #+#    #+#             */
/*   Updated: 2023/12/29 14:13:43 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main (void)
{
	Dog			dog;
	Animal		*animals[6];

	for (size_t i = 0; i < 6; i++) {
		if (i < 3)
			animals[i] = new Dog;
		else
			animals[i] = new Cat;
	}

	dog.getBrain()->newIdea("I want to play all day");
	Dog	cpydog(dog);
	std::string *ideas = cpydog.getBrain()->getIdeas();
	std::cout << ideas[0] << std::endl;

	for (size_t i = 0; i < 6; i++)
		delete animals[i];

	return (0);
}
