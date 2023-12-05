/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:28:13 by roberto           #+#    #+#             */
/*   Updated: 2023/12/05 13:18:07 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include "Contact.hpp"

class	Phonebook
{
	private:
		Contact	contacts[8];

	public:
		//constructors
		Phonebook(void);
		//destructor
		~Phonebook(void);
		void	add(void);
		void	search(void);

		//getters
};

#endif
