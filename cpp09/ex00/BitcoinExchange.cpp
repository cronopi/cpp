/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:52:47 by roberto           #+#    #+#             */
/*   Updated: 2024/10/19 16:52:11 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	*this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy)
{
	(void)copy;
	return (*this);
}


void BitcoinExchange::check_date(std::vector<std::string> date)
{
	for (size_t i = 0; i < date.size(); i++)
	{
		if (date[i].length() != 10)
		{
			std::cerr << "Error1  " << date[i] << std::endl;
			return ;
		}
		if (date[i][4] != '-' || date[i][7] != '-')
		{
			std::cerr << "Error2  " << date[i] << std::endl;
			return ;
		}
		if( !(date[i][0] == '2') || !(date[i][1] == '0') || (date[i][2] < '0' || date[i][2] > '2') || (date[i][3] < '0' || date[i][3] > '9'))
		{
			std::cerr << "Error3  " << date[i] << std::endl;
			return ;
		}
		if ((date[i][5] < '0' || date[i][5] > '1') || (date[i][6] < '0' || date[i][6] > '9'))
		{
			std::cerr << "Error4  " << date[i] << std::endl;
			return ;
		}
		if ((date[i][8] < '0' || date[i][8] > '3') || (date[i][9] < '0' || date[i][9] > '9'))
		{
			std::cerr << "Error5  " << date[i] << std::endl;
			return ;
		}
	}
}

void BitcoinExchange::check_exchange(std::vector<std::string> exchange)
{
	int j = 0;
	unsigned int dot = 0;
	for (size_t i = 0; i < exchange.size(); i++)
	{
		if (exchange[i].length() > 7)
		{
			std::cerr << "Error6 " << exchange[i] << std::endl;
			return ;
		}
		while (exchange[i][j])
		{
			if (exchange[i][j] == '.')
				dot++;
			if (exchange[i][j] < '0' || exchange[i][j] > '9' || (exchange[i][j] != '.'))
			{
				std::cerr << "Error7  " << exchange[i] << std::endl;
				return ;
			}
			j++;
		}
		if (dot > 1)
		{
			std::cerr << "Error8  " << exchange[i] << std::endl;
			return ;
		}

		j = 0;
		dot = 0;
	}

}


void BitcoinExchange::checkFile(char *argv)
{
	std::string     tmp;
	std::ifstream	file;
	std::string		line;
	size_t			pos;

	file.open(argv);
	if (!file.is_open())
	{
		std::cout << "Error opening file. The file do not exist, it can't be read, or the format is incorrect " << std::endl;
		return ;
	}
	std::getline(file, line);
	while(std::getline(file, line))
	{
		pos = line.find(',');
		if (pos == std::string::npos)
		{
			std::cerr << "Error: coma " << line << std::endl;
			return ;
		}
		tmp = line.substr(0, pos);
		date.push_back(tmp);

		tmp = line.substr(pos + 1);
		exchange.push_back(tmp);
	}
	check_date(date);
	printData(date);
	//check_exchange(exchange);
	file.close();
}


void BitcoinExchange::printData(std::vector<std::string> print)
{
	for (size_t i = 0; i < print.size(); i++)
	{
		std::cout << print[i] << std::endl;
	}
}
