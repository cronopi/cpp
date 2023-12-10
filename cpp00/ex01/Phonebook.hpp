/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:28:13 by roberto           #+#    #+#             */
/*   Updated: 2023/12/06 14:00:26 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include	<iomanip>
# include	"Contact.hpp"

class Phonebook
{
	private:
		Contact		_contacts[8];
		int			_index;
	public:
		Phonebook();
		~Phonebook();
		void add_contact();
		void search_contact();
};

#endif
