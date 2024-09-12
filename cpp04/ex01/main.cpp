/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:48:39 by roberto           #+#    #+#             */
/*   Updated: 2024/09/12 17:41:22 by roberto          ###   ########.fr       */
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
	Animal		*animals[4];

	for (size_t i = 0; i < 4; i++) {
		if (i < 2)
			animals[i] = new Dog;
		else
			animals[i] = new Cat;
	}
	for (size_t i = 0; i < 4; i++)
		delete animals[i];

	Dog	dog;
	Dog	cpydog(dog);
	dog.getBrain()->newIdea("I want to play all day");
	cpydog.getBrain()->newIdea("zzz...");

	std::string *ideas = dog.getBrain()->getIdeas();
	std::cout << "idea: " << ideas[0] << std::endl;

		ideas = cpydog.getBrain()->getIdeas();
	std::cout << "idea: " << ideas[1] << std::endl;
	return (0);
}
