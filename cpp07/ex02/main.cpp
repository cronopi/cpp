/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:52:40 by rcastano          #+#    #+#             */
/*   Updated: 2024/05/17 11:23:48 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


int main(void)
{
    int * a = new int();
    std::cout << *a << std::endl;

    Array<int> test(5);
    Array<int> test2(test);
    Array<int> test3(test);



    for (int i = 0; i < 5; i++)
    {
        test.elements[i] = i;
    }
    test2.elements[0] = 42;
    std::cout << "primero" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << test.elements[i] << std::endl;
    }
    std::cout << "segundo" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << test2.elements[i] << std::endl;
    }


    std::cout << "aqui: "<< test.size() << std::endl;
    return (0);
}
