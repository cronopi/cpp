/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:59:26 by roberto           #+#    #+#             */
/*   Updated: 2023/12/04 13:59:42 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int i = 0;
	int j = 1;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while(argv[j] != NULL)
		{
			i = 0;
			while(argv[j][i] != '\0')
			{
				std::cout << (char)std::toupper(argv[j][i]);
				i++;
			}
			j++;
		}
		std::cout << std::endl;
	}
	return (0);
}
