/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:48:39 by roberto           #+#    #+#             */
/*   Updated: 2024/09/15 19:50:43 by roberto          ###   ########.fr       */
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
	//Animal animal;

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
