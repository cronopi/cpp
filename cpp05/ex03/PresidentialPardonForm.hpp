/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:37:11 by rcastano          #+#    #+#             */
/*   Updated: 2024/04/09 10:50:58 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include "Aform.hpp"

class PresidentialPardonForm: public Aform
{
    private:

    public:
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm &src);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &src);

        PresidentialPardonForm(std::string target);
        void execute(Bureaucrat const &executor) const;
};

#endif
