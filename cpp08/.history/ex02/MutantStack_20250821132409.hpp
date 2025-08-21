/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:21:45 by roberto           #+#    #+#             */
/*   Updated: 2025/08/21 13:24:09 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <iterator>
#include <stack>
#include <algorithm>
#include <deque>
#include <list>

template <class T>

class MutantStack : public std::stack<T>
{
	private:
		std::deque<T> container;

	public:
		MutantStack();
		~MutantStack();
		MutantStack( MutantStack const & src );
		MutantStack &		operator=( MutantStack const & rhs );

		typedef typename std::deque<T>::iterator iterator;

		iterator begin();
		iterator end();
};

#include "MutantStack.tpp"

#endif
