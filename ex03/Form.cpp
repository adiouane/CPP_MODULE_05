/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 21:52:11 by adiouane          #+#    #+#             */
/*   Updated: 2023/01/06 03:25:57 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _grade_to_signed(150), _to_execute(150){}

Form::Form(Form const &obj) : _name(obj.getName()), _grade_to_signed(obj.getToSigned()), _to_execute(obj.getToExecute()){}

Form& Form::operator=(Form const &obj)
{
    _is_signed = obj.getIsSigned();
    return (*this);
}

Form::~Form(){}

/*ORTHODOX*/

Form::Form(std::string const &name, int to_signed, int to_execute) :
     _name(name), _grade_to_signed(to_signed) , _to_execute(to_execute)
{
    if (to_signed < 1)
        throw Form::GradeTooHighException();
    else if (to_signed > 150)
        throw Form::GradeTooLowException();
    else if (to_execute < 1)
        throw Form::GradeTooHighException();
    else if (to_execute > 150)
        throw Form::GradeTooLowException();
}

std::string Form::getName() const
{
    return (_name);
}

bool Form::getIsSigned() const
{
    return (_is_signed);
}

int Form::getToSigned() const
{
    return (_grade_to_signed);
}

int Form::getToExecute() const
{
    return (_to_execute);
}

void Form::beSigned(Bureaucrat const &obj)
{
    if (obj.getGrade() > _grade_to_signed)
        throw Form::GradeTooLowException();
    else
        _is_signed = true;
}

/*NESTED CLASS*/

const char*Form::GradeTooHighException::what()const throw()
{
    return ("GradeTooHighException");
}

const char*Form::GradeTooLowException::what()const throw()
{
    return ("GradeTooLowException");
}

const char*Form::FormNotSignedException::what()const throw()
{
    return ("FormNotSignedException"); //todo here why
}


std::ostream &operator<<(std::ostream &out, const Form &obj)
{
    out << obj.getName() << ", form grade to sign " << obj.getToSigned() << ", form grade to execute " << obj.getToExecute();
    if (obj.getIsSigned())
        out << ", form is signed";
    else
        out << ", form is not signed";
    out << std::endl;    
    return (out);
}

