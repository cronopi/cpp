/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:52:47 by roberto           #+#    #+#             */
/*   Updated: 2025/05/14 18:40:10 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::ifstream	file;
	std::string		line;
	std::string		date;

	size_t			pos;
	float			value;

	file.open("data.csv");
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
		date = line.substr(0, pos);
		std:: istringstream iss(line.substr(pos + 1));
		iss >> value;
		data.insert(std::pair<std::string, float>(date, value));
	}
	file.close();
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	(void)copy;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy)
{
	(void)copy;
	return (*this);
}

void BitcoinExchange::print_map()
{
	for (std::map<std::string, float>::iterator it = data.begin(); it != data.end(); it++)
	{
		std::cout << it->first << " " << it->second << std::endl;
	}
}

void BitcoinExchange::checkFile(char *argv)
{
	std::string		tmp;
	float			tmp_float;
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
		pos = line.find("|");
		if (pos == std::string::npos)
		{
			tmp = line.substr(0, pos);
			//std::cout << tmp << std::endl;
			date.push_back(tmp);
			exchange.push_back(0.0);
			continue;
		}
		tmp = line.substr(0, pos);
		tmp.erase(0, tmp.find_first_not_of(" \t\r\n"));
		tmp.erase(tmp.find_last_not_of(" \t\r\n") + 1);
		date.push_back(tmp);

		tmp = line.substr(pos + 1);
		std::cout << "tmp: " << tmp << std::endl;
		for (size_t i = 0; i < tmp.length(); i++)
		{
			if (tmp[i] < '0' || tmp[i] > '9')
			{
				tmp = '$';
			}
		}
		if (tmp == "$")
			exchange.push_back('$');
		else
		{
			std::istringstream iss2(tmp);
			iss2 >> tmp_float;
			exchange.push_back(tmp_float);
		}
	}

 	for (size_t i = 0; i < date.size(); i++)
	{
		if (date[i].length() != 10)
		{
			if (date[i].empty())
				std::cerr << "Error: bad input => empty" << std::endl;
			else
			std::cerr << "Error: bad input => " << date[i] << std::endl;
		}
		else if (date[i][4] != '-' || date[i][7] != '-')
		{
			std::cerr << "Error: bad input => " << date[i] << std::endl;
		}
		else if( !(date[i][0] == '2') || !(date[i][1] == '0') || (date[i][2] < '0' || date[i][2] > '2') || (date[i][3] < '0' || date[i][3] > '9'))
		{
			std::cerr << "Error: bad input => " << date[i] << std::endl;
		}
		else if ((date[i][5] < '0' || date[i][5] > '1') || (date[i][6] < '0' || date[i][6] > '9'))
		{
			std::cerr << "Error: bad input => " << date[i] << std::endl;
		}
		else if ((date[i][8] < '0' || date[i][8] > '3') || (date[i][9] < '0' || date[i][9] > '9'))
		{
			std::cerr << "Error: bad input => " << date[i] << std::endl;
		}
		else if (exchange[i] == '$')
		{
			std::cerr << "Error: incorrect value " << std::endl;
		}
		else if (exchange[i] < 0)
		{
			std::cerr << "Error: not a positive number. " << std::endl;
		}
		else if (exchange[i] > 1000)
		{
			std::cerr << "Error: too large number. " << std::endl;
		}
		else
		{
			std::map<std::string, float>::iterator it = data.begin();
			for (it = data.begin(); it != data.end(); it++)
			{
				if (date[i] < it->first)
				{
					it--;
					std::cout << date[i] << " => " << exchange[i] << " = " << exchange[i] * it->second << std::endl;
					break;
				}
			}
		}
	}
	file.close();
}
