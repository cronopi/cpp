/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:48:39 by roberto           #+#    #+#             */
/*   Updated: 2023/12/27 17:55:51 by roberto          ###   ########.fr       */
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
    int size = 4;
    int i = 0;
    std::string animals[size];

    for (i; i < (size / 2); ++i)
    {
        animals[i] = new Dog();
    }

    for (i; i < size; ++i)
    {
        animals[i] = new Cat();
    }

    for(i = 0; i < size; ++i)
    {
        delete animals[i];
    }

    return (0);
}
