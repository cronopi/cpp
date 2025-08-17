/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:26:41 by roberto           #+#    #+#             */
/*   Updated: 2024/10/16 19:30:51 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack()
{
	std::cout << "MutantStack constructor called" << std::endl;
}

template<typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "MutantStack destructor called" << std::endl;
}

template<typename T>
MutantStack<T>::MutantStack( MutantStack const & src )
{
	std::cout << "MutantStack copy constructor called" << std::endl;
	if (this != &src)
		*this = src;
}

template<typename T>
MutantStack<T> &	MutantStack<T>::operator=( MutantStack const & rhs )
{
	if (this != &rhs)
		std::stack<T>::operator=(rhs);
	return (*this);
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (this->container.begin());
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return (this->container.end());
}

#endif
