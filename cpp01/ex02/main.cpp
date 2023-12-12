/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:27:01 by roberto           #+#    #+#             */
/*   Updated: 2023/12/12 18:33:33 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "string adress " << &str << std::endl;
	std::cout << "stringPTR adress " << stringPTR << std::endl;
	std::cout << "stringREF adress " << &stringREF << std::endl;

	std::cout << "string value " << str << std::endl;
	std::cout << "stringPTR value " << *stringPTR << std::endl;
	std::cout << "stringREF value " << stringREF << std::endl;
	return (0);
}
