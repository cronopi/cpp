/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:15:26 by roberto           #+#    #+#             */
/*   Updated: 2024/07/29 13:24:52 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "arguments error" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream file;
	file.open(filename.c_str());
	if (!file.is_open())
	{
		std::cout << "File not found" << std::endl;
		return (1);
	}
	std::string file2 = "output";
	std::ofstream outfile;
	outfile.open(file2.c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Error creating the file: " << file2 << std::endl;
		return (1);
	}
	size_t pos = 0;
	std::string line;
	std::string new_line;
	while(std::getline(file, line).good())
	{
		pos = line.find(s1);
		while (pos != std::string::npos)
		{
			new_line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
			line = new_line;
			pos = line.find(s1, pos + s2.length());
		}
		outfile << line << std::endl;
	}
	file.close();
	outfile.close();
	return (0);
}
