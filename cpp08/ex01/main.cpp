/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:52:40 by rcastano          #+#    #+#             */
/*   Updated: 2024/07/04 10:53:38 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <random>

int main(void)
{
    Span example(10);

    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        example.addNumber(rand() % 100);
        //example.addNumber(rand());
    }
    std::cout << example.shortestSpan() << std::endl;
    std::cout << example.longestSpan() << std::endl;
    return (0);
}
