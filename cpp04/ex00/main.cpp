/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:48:39 by roberto           #+#    #+#             */
/*   Updated: 2024/09/16 15:25:43 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main (void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Cat   * i = new Cat();

    const WrongAnimal *wrong = new WrongCat();
    const WrongCat *wrong2 = new WrongCat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    meta->makeSound();
    j->makeSound();
    i->makeSound();

    wrong->makeSound();
    wrong2->makeSound();

    delete meta;
    delete i;
    delete j;

    delete wrong;
    delete wrong2;

    return (0);
}
