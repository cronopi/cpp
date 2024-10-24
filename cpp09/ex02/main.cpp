/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:52:40 by rcastano          #+#    #+#             */
/*   Updated: 2024/10/24 15:55:45 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "Error: bad arguments" << std::endl;
        return (1);
    }
    PmergeMe PmergeMe;
    int tmp = 0;
    int i = 0;
    int j = 0;
	while(argv[i] != NULL)
    {
		if (argv[i][j] >= '0' && argv[i][j] <= '9')
		{
			tmp = (argv[i][j] - '0');
            PmergeMe.vec.push_back(tmp);
            PmergeMe.lst.push_back(tmp);
		}
        i++;
    }
    for(std::list<int>::iterator it = PmergeMe.lst.begin(); it != PmergeMe.lst.end(); it++)
    {
        std::cout << *it << " lista" << std::endl;
    }


    for(std::vector<int>::iterator it = PmergeMe.vec.begin(); it != PmergeMe.vec.end(); it++)
    {
        std::cout << *it << " vector" << std::endl;
    }

    return (0);
}

/*
std::list<int> mylist (myints,myints+5);

  std::cout << "mylist contains:";
  for (std::list<int>::iterator it=mylist.begin(); it != mylist.end(); ++it)
    std::cout << ' ' << *it;
*/