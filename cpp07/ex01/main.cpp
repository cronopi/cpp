/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:52:40 by rcastano          #+#    #+#             */
/*   Updated: 2024/05/14 15:20:41 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

void sleeping(void)
{
    std::cout << "zzzzzzzzzzzz" << std::endl; 
}

int main(void)
{
    char ptr[] = "test";
    //std::string ptr = "test";
    iter(ptr, 5, sleeping);
    return (0);
}
