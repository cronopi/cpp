/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:34:03 by rcastano          #+#    #+#             */
/*   Updated: 2024/04/09 10:56:54 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <string>
# include "Aform.hpp"
# include "Bureaucrat.hpp"
# include <cstdlib>

class RobotomyRequestForm : public Aform
{
    private:

    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm &src);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &src);

        RobotomyRequestForm(std::string target);
        void execute(Bureaucrat const &executor) const;
};

#endif
