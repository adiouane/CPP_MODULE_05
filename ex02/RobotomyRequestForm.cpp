/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:29:04 by adiouane          #+#    #+#             */
/*   Updated: 2023/01/06 01:10:43 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
    Form("RobotomyRequestForm", 72, 45), _target("default"){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj) :
    Form(obj), _target(obj.getTarget()){}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
    _target = obj.getTarget();
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){}


/*ORTHODOX*/

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
    Form("RobotomyRequestForm", 72, 45), _target(target){}

std::string RobotomyRequestForm::getTarget(void) const
{
    return (_target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (!getIsSigned())
         throw Form::FormNotSignedException();
    if (executor.getGrade() > getToExecute())
        throw Form::GradeTooLowException();
    std::cout << "some drilling Makes noises..." << std::endl;
    if (rand() % 2)
        std::cout << _target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "Robotomization failed" << std::endl;
}
