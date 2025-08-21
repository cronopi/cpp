/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:52:40 by rcastano          #+#    #+#             */
/*   Updated: 2024/06/24 11:36:16 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"
#include <vector>
#include <set>
#include <list>


int main(void)
{
    std::list<int> lst;
    std::vector<int> v;

    for (int i = 0; i < 10; i++)
    {
        lst.push_back(i);
        v.push_back(i);
    }

    if (Easyfind(lst, 3) == 0)
        std::cout << "found" << std::endl;
    else
        std::cout << "not found" << std::endl;

    if (Easyfind(v, 11) == 0)
        std::cout << "found" << std::endl;
    else
        std::cout << "not found" << std::endl;


    std::vector<int > vec;
    for (int i = 0; i < 10; i++)
    {
        vec.push_back(i);
    }

    if (Easyfind(vec, 5) == 0)
        std::cout << "found" << std::endl;
    else
        std::cout << "not found" << std::endl;

    if (Easyfind(vec, 25) == 0)
        std::cout << "found" << std::endl;
    else
        std::cout << "not found" << std::endl;

    return (0);
}
