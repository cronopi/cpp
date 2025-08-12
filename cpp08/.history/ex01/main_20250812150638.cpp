/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:52:40 by rcastano          #+#    #+#             */
/*   Updated: 2025/08/12 15:06:37 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int main(void)
{
    Span example = Span(5);

    try
    {
        std::cout << example.longestSpan() << " es el numero con mayor diferencia" << std::endl;
        std::cout << example.shortestSpan() << " es el numero con menor diferencia" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try
    {
        example.addNumber(6);
        std::cout << example.shortestSpan() << " es el numero con menor diferencia" << std::endl;
        std::cout << "\n iniciando \n" << std::endl;
        std::cout << example.longestSpan() << " es el numero con mayor diferencia" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << " es el numero con menor diferencia" << std::endl;
        std::cout << sp.longestSpan() << " es el numero con mayor diferencia" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    try
    {
        Span example = Span(10);
        example.fill(10);
        std::cout << example.shortestSpan() << " es el numero con menor diferencia\n" << std::endl;
        std::cout << example.longestSpan() << " es el numero con mayor diferencia\n" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return (0);
}
