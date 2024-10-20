/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:52:40 by rcastano          #+#    #+#             */
/*   Updated: 2024/10/19 17:23:21 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: Invalid number of arguments." << std::endl;
        return (1);
    }
    if (!(std::string(argv[1]) == "data.csv"))
    {
        std::cout << "Error: Invalid database file. This database is provided with this subject." << std::endl;
        return (1);
    }
    BitcoinExchange bit;

    bit.checkFile(argv[1]);

    //bit.getValue(argv[1]);
    //bit.printData();
    return (0);
}
