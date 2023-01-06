/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 01:34:02 by adiouane          #+#    #+#             */
/*   Updated: 2023/01/06 03:22:02 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(Intern const &obj){*this = obj;}

Intern& Intern::operator=(Intern const &obj)
{
    (void)obj;
    return (*this);
}

Intern::~Intern(){}

/*ORTHODOX*/

Form *Intern::makeForm(std::string const &name, std::string const &target)
{
    std::string formNames[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    Form *forms[3] = {new RobotomyRequestForm(target), new PresidentialPardonForm(target), new ShrubberyCreationForm(target)};
    for (int i = 0; i < 3; i++)
    {
        if (name == formNames[i])
        {
            int j = i;
            std::cout << "Intern creates " << name << std::endl;
            for (int i = 0; i < 3; i++)
            {
                if (i != j)
                    delete forms[i];
            }
            return forms[i];
        }
    }
    std::cout << "Intern can't create " << name << std::endl;
    return NULL;
}