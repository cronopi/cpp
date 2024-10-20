/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:29:58 by rcastano          #+#    #+#             */
/*   Updated: 2024/10/19 16:24:33 by roberto          ###   ########.fr       */
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
		//std::map<std::string, float> data;
		std::vector<std::string> date;
		std::vector<std::string> exchange;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &copy);

		void checkFile(char *argv);
		void check_date(std::vector<std::string> date);
		void check_exchange(std::vector<std::string> exchange);

		void printData(std::vector<std::string> print);
};

#endif
