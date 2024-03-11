/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:47:20 by roberto           #+#    #+#             */
/*   Updated: 2023/12/29 14:04:43 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Animal
{
	private:
		Brain *brain;
	protected:
		std::string type;

	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &copy);
		virtual ~Animal();
		Animal &operator=(const Animal &copy);

		virtual void makeSound() const;
		std::string getType() const;

		Brain	*getBrain(void) const;
};

#endif
