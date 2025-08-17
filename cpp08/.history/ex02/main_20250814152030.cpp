/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:16:46 by roberto           #+#    #+#             */
/*   Updated: 2025/08/14 15:20:30 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "valor superior " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "valor superior " <<mstack.top() << std::endl;
	std::cout << "tamaño de la pila "  << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "tamaño de la pila "  << mstack.size() << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	while (it != ite)
	{
		std::cout<< "valor de la pila " << *it << std::endl;
		--it;
	}

	while (it != ite)
	{
		std::cout<< "valor de la pila " << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return (0);
}
