/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:28:11 by adiouane          #+#    #+#             */
/*   Updated: 2023/01/06 01:11:12 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
    Form("ShrubberyCreationForm", 145, 137), _target("default"){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj) :
    Form(obj), _target(obj.getTarget()){}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
    _target = obj.getTarget();
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

/*ORTHODOX*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
    Form("ShrubberyCreationForm", 145, 137), _target(target){}


std::string ShrubberyCreationForm::getTarget(void) const
{
    return (_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (!getIsSigned())
        throw Form::FormNotSignedException();
    if (executor.getGrade() > getToExecute())
        throw Form::GradeTooLowException();
    std::ofstream file(_target + "_shrubbery");
    file    <<  "             ,@@@@@@@,"  << std::endl;
    file    <<  "     ,,,.   ,@@@@@@/@@,  .oo8888o."  << std::endl;
    file    <<  "  ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o"  << std::endl;
    file    <<  " ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'"  << std::endl;
    file    <<  " %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'"  << std::endl;
    file    <<  " %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'"  << std::endl;
    file    <<  " `&%\\ ` /%&'    |.|        \\ '|8'"  << std::endl;
    file    <<  "     |o|        | |         | | " << std::endl;
    file    <<  "     |.|        | |         | | " << std::endl;
    file    << "\\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_ "  << std::endl;
    file.close();
}