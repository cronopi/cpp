/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:52:40 by rcastano          #+#    #+#             */
/*   Updated: 2024/10/21 14:26:26 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    (void)argv;
    if (argc != 2)
    {
        std::cout << "Error: Invalid number of arguments." << std::endl;
        return (1);
    }
    BitcoinExchange BitcoinExchange;

    BitcoinExchange.checkFile(argv[1]);

    //BitcoinExchange.print_map();
    return (0);
}