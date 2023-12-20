/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:15:26 by roberto           #+#    #+#             */
/*   Updated: 2023/12/17 16:08:34 by roberto          ###   ########.fr       */
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
		return (0);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream file(filename);
	if (!file.is_open())
	{
		std::cout << "File not found" << std::endl;
		return (1);
	}
	std::string file2 = "output.replace";
	std::ofstream outfile(file2);
	if (!outfile.is_open())
	{
		std::cerr << "Error creating the file: " << file2 << std::endl;
		return (1); // Devuelve un código de error
	}
/* 	char ch;
	int i = 0;
    while (file.get(ch))
	{
		if (ch == s1[0])
		{
			while (s1[i] != '\0')
			{
				outfile.put(s2[i]);
				i++;
			}
		}
        outfile.put(ch);
    } */

	std::string line;
    while (std::getline(file, line)) {
        size_t pos = line.find(s1);
        while (pos != std::string::npos) {
            line.replace(pos, s1.length(), s2);
            pos = line.find(s1, pos + s2.length());
        }
        outfile << line << std::endl;
    }
	file.close();
	outfile.close();
	return (0);
}
