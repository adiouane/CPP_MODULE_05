/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:30:32 by adiouane          #+#    #+#             */
/*   Updated: 2023/01/06 01:07:45 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const &obj);
        PresidentialPardonForm& operator=(PresidentialPardonForm const &obj);
        ~PresidentialPardonForm();
        PresidentialPardonForm(std::string const &target);

        void execute(Bureaucrat const &executor) const;

        std::string  getTarget(void) const;
};

#endif