/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 22:40:11 by adiouane          #+#    #+#             */
/*   Updated: 2023/01/06 18:17:46 by adiouane         ###   ########.fr       */
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
        Bureaucrat b1("\033[0;32mBERUA\033[0;20m", 2);
        Bureaucrat b2("\033[0;32mBERUA\033[0;20m", 149);
        Bureaucrat b3("\033[0;32mBERUA\033[0;20m", 149);

        ShrubberyCreationForm f1("ShrubberyCreationForm");
        RobotomyRequestForm f2("RobotomyRequestForm");
        PresidentialPardonForm f3("PresidentialPardonForm");
  
        b1.signForm(f1);
        b1.executeForm(f1);
        b2.signForm(f2);
        b2.executeForm(f2);
        b3.signForm(f3);
        b3.executeForm(f3);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}
