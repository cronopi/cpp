/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:52:40 by rcastano          #+#    #+#             */
/*   Updated: 2024/04/26 11:30:48 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    (void)av;
    if (ac != 2)
    {
        return (1);
    }

    std::cout << "      A: " << std::is_floating_point<A>::4.f << '\n';
    std::cout << "      A: " << std::is_floating_point<A>::0.f << '\n';

    return (0);
    ScalarConverter convert;

    convert.convert(av[1]);

    return (0);
}
