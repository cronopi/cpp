/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:52:40 by rcastano          #+#    #+#             */
/*   Updated: 2024/12/02 14:10:10 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

void print(char c)
{
    std::cout << c << std::endl;
}

void toupper(char c)
{
    std::cout << (char)std::toupper(c) << std::endl;
}

int main(void)
{
    char ptr[] = "test";
    iter(ptr, 5, print);
    iter(ptr, 5, toupper);
    iter(ptr, 5, TemplateTest<char *>);
    return (0);
}
