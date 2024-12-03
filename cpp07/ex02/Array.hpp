/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:29:58 by rcastano          #+#    #+#             */
/*   Updated: 2024/12/02 15:15:27 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <string>
#include <iostream>


template <typename T>
class Array
{
	private:
		int		_lenght;

	public:
		T *elements;
		Array()
		{
			elements = new T[0];
		}
		Array(unsigned int n)
		{
			elements = new T[n];
			_lenght = n;
		}
		Array(Array &src)
		{
			int i;

			_lenght = src.size();
			elements = new T[_lenght];
			for(i = 0; i < _lenght; i++)
			{
				elements[i] = src.elements[i];
			}
		}
		Array &operator=(const Array &src)
		{
			int i;
			if (this != &src)
			{
				delete [] elements;
				_lenght = src.size();
				elements = new T[_lenght];
				for(i = 0; i < _lenght; i++)
				{
					elements[i] = src.elements[i];
				}
			}
			return (*this);
		}
		T &operator[](int i)
		{
			if (i < 0 || i >= _lenght || _lenght == 0)
			{
				throw Array<T>::OutOfBoundsException();
			}
			return (elements[i]);
		}
		~Array()
		{
			delete [] elements;
			std::cout << "Destructor called" << std::endl;
		}
		int	size()
		{
			return (_lenght);
		}

		class OutOfBoundsException : public std::exception
		{
			virtual const char *what() const throw();
		};
};

template< typename T >
const char	*Array<T>::OutOfBoundsException::what() const throw()
{
	return ("Error: index out of bounds");
}

#endif
