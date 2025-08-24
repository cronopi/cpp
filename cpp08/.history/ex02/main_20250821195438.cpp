/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:16:46 by roberto           #+#    #+#             */
/*   Updated: 2025/08/21 19:54:38 by roberto          ###   ########.fr       */
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
	std::cout << "begin "<< *it << std::endl;
	MutantStack<int>::iterator ite = mstack.end();
 	std::cout << "end "<< *ite << std::endl;

	++it;
	std::cout << "++it "<< *it << std::endl;
	--it;
	std::cout << "--it "<< *it << std::endl;


	while (it != ite)
	{
		std::cout<< "while: " << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

		std::cout << mstack.size() << std::endl;
	std::cout << s.top() << std::endl;

	mstack.pop();

	std::cout << mstack.top() << std::endl;
	std::cout << std::endl;
	std::cout << "List" << std::endl;

	std::list<int> lst;

	lst.push_back(5);
	lst.push_back(17);

	std::cout << lst.back() << std::endl;

	lst.pop_back();

	std::cout << lst.back() << std::endl;
	std::cout << lst.size() << std::endl;

	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);

	std::list<int>::iterator listIt = lst.begin();
	std::list<int>::iterator listIte = lst.end();

	++listIt;
	--listIt;
	while (listIt != listIte)
	{
		std::cout << *listIt << std::endl;
		listIt++;
	}

	std::cout << std::endl;

	return 0;
	return (0);
}
