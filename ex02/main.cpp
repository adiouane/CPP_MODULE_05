/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 22:40:11 by adiouane          #+#    #+#             */
/*   Updated: 2023/01/06 03:38:07 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try{
        Bureaucrat b1("Bureaucrat1", 2);
        Bureaucrat b2("Bureaucrat2", 149);
        Bureaucrat b3("Bureaucrat3", 149);

        ShrubberyCreationForm f1("ShrubberyCreationForm");
        RobotomyRequestForm f2("RobotomyRequestForm");
        PresidentialPardonForm f3("PresidentialPardonForm");
        try
        {
            b1.signForm(f1);
            b2.signForm(f2);
            b3.signForm(f3);
            f1.beSigned(b1);
            f2.beSigned(b2);
            f3.beSigned(b3);
            f1.execute(b3);
        }
        catch (std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }

        try
        {
            f1.execute(b3);
            b1.executeForm(f1);
            b2.executeForm(f2);
            b3.executeForm(f3);
        }
        catch (std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}
