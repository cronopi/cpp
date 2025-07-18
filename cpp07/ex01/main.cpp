/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:52:40 by rcastano          #+#    #+#             */
/*   Updated: 2024/12/09 13:02:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

template <typename T>
void print(T c)
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
    int tab[] = {1, 2, 3, 4};

    iter(ptr, 4, print);
    iter(ptr, 4, toupper);
    iter(ptr, 4, TemplateTest<char >);

    iter(tab, 4, (void(*)(int))NULL);
    iter(tab, 4, print);
    iter(tab, 4, TemplateTest<int >);
    return (0);
}
