/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:52:40 by rcastano          #+#    #+#             */
/*   Updated: 2024/11/21 16:05:17 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    (void)av;
    if (ac != 2)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return (1);
    }

    ScalarConverter::convert(av[1]);

    return (0);
}
