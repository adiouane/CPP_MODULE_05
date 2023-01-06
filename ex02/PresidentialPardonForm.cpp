/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:30:14 by adiouane          #+#    #+#             */
/*   Updated: 2023/01/06 01:10:28 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
    Form("PresidentialPardonForm", 25, 5), _target("default"){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj) :
    Form(obj), _target(obj.getTarget()){}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
    _target = obj.getTarget();
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){}


/*ORTHODOX*/


PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
    Form("PresidentialPardonForm", 25, 5), _target(target){}

std::string PresidentialPardonForm::getTarget(void) const
{
    return (_target);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const{
    if (!getIsSigned())
        throw Form::FormNotSignedException();
    if (executor.getGrade() > getToExecute())
        throw Form::GradeTooLowException();
    std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}