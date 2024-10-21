/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:52:47 by roberto           #+#    #+#             */
/*   Updated: 2024/10/21 15:32:49 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool BitcoinExchange::Whitespaces(unsigned c) 
{
        if (c == ' ' || c == '\t' ||
            c == '\r' || c == '\f' || c == '\v') 
            return true;
		else 
            return false;
}

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
	*this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy)
{
	(void)copy;
	return (*this);
}

void BitcoinExchange::printData(std::vector<std::string> print)
{
	for (size_t i = 0; i < print.size(); i++)
	{
		std::cout << print[i] << std::endl;
	}
}

void BitcoinExchange::printfloat(std::vector<float> print)
{
	for (size_t i = 0; i < print.size(); i++)
	{
		std::cout << print[i] << std::endl;
	}
}

void BitcoinExchange::print_map()
{
	for (std::map<std::string, float>::iterator it = data.begin(); it != data.end(); it++)
	{
		std::cout << it->first << " " << it->second << std::endl;
	}
}

void BitcoinExchange::check_date(std::vector<std::string> date)
{
	for (size_t i = 0; i < date.size(); i++)
	{
		if (date[i].length() != 11)
		{
			std::cerr << "Error1  " << date[i] << std::endl;
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

void BitcoinExchange::check_exchange(std::vector<float> exchange)
{
	for (size_t i = 0; i < exchange.size(); i++)
	{
		
		if (exchange[i] < 0)
		{
			std::cerr << "Error: not a positive number. " << exchange[i] << std::endl;
			continue;
		}
		else if (exchange[i] > 1000)
		{
			std::cerr << "Error: too large a number. " << exchange[i] << std::endl;
			continue;
		}
		else
			std::cout << exchange[i] << std::endl;
	}
}

void BitcoinExchange::checkFile(char *argv)
{
	std::string     tmp;
	float           tmp_float;
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
		if (pos == std::string::npos && pos <= 20)
		{
			std::cerr << "no se encontró el caracter | " << std::endl;
			continue;
		}
		tmp = line.substr(0, pos);
		date.push_back(tmp);
		std::istringstream iss(tmp);
		iss >> tmp_float;
		data_number.push_back(tmp_float);
		std::cout << tmp << " | " << tmp_float << " | "  << std::endl;
		
		tmp = line.substr(pos + 1);
		std::istringstream iss2(tmp);
		iss2 >> tmp_float;
		exchange.push_back(tmp_float);
	}
	//check_date(date);
	//printfloat(data_number);
	//printData(date);
	//check_exchange(exchange);
	//printexchange(exchange);
	file.close();
}
