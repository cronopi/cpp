/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:52:40 by rcastano          #+#    #+#             */
/*   Updated: 2024/12/02 15:46:19 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


int main(void)
{
    Array<int> test(5);

    try
    {
        test[0] = 42;
        test[1] = 43;
        test[2] = 44;
        test[3] = 45;
        test[4] = 46;
        //test[5] = 48;
        for (int i = 0; i < 5; i++)
        {
            std::cout << test.elements[i] << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cout << "Excepción lanzada: " << e.what() << std::endl;
    }

    Array<int> cpyTest(test);
    try
    {
        cpyTest[0] = -1;
        for (int i = 0; i < 5; i++)
        {
            std::cout << cpyTest.elements[i] << std::endl;
        }
        std::cout << "test repetido: " << test[0] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Excepción lanzada: " << e.what() << std::endl;
    }

    Array<std::string> testString(2);

    try
    {
        testString[0] = "hola";
        testString[1] = "mundo";
        std::cout << "string: " << testString[0] << std::endl;
        std::cout << "string: " << testString[1] << std::endl;

    }
    catch (const std::exception &e)
    {
        std::cout << "Excepción lanzada: " << e.what() << std::endl;
    }

    std::cout << "comprobar el size con la funcion: "<< test.size() << std::endl;
    std::cout << "comprobar el size con la funcion: "<< testString.size() << std::endl;

    return (0);
}
