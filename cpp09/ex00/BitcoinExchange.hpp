/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:29:58 by rcastano          #+#    #+#             */
/*   Updated: 2024/10/21 15:18:30 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <sstream>
#include <string>


class BitcoinExchange
{
	private:
		std::map<std::string, float> data;
		std::vector<std::string> date;

		std::vector<float> exchange;
		std::vector<float> data_number;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &copy);

		void checkFile(char *argv);
		void check_date(std::vector<std::string> date);
		void check_exchange(std::vector<float> exchange);

		void printData(std::vector<std::string> print);
		void printfloat(std::vector<float> print);
		void print_map();
		bool Whitespaces(unsigned c);
};

#endif
