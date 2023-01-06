/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 21:52:11 by adiouane          #+#    #+#             */
/*   Updated: 2023/01/06 16:40:59 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _to_signed(150), _to_execute(150){}

Form::Form(Form const &obj) : _name(obj.getName()), _to_signed(obj.getToSigned()), _to_execute(obj.getToExecute()){}

Form& Form::operator=(Form const &obj)
{
    _is_signed = obj.getIsSigned();
    return (*this);
}

Form::~Form(){}

/*ORTHODOX*/

Form::Form(std::string const &name, int to_signed, int to_execute) :
     _name(name), _is_signed(false), _to_signed(to_signed) , _to_execute(to_execute)
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
    return (_to_signed);
}

int Form::getToExecute() const
{
    return (_to_execute);
}

void Form::beSigned(Bureaucrat const &obj)
{
    if (obj.getGrade() > _to_signed)
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

std::ostream &operator<<(std::ostream &out, const Form &obj)
{
    out << "form " << obj.getName() << ", grade to sign " << obj.getToSigned() << ", form grade to execute " << obj.getToExecute();
    if (obj.getIsSigned())
        out << ", form is signed";
    else
        out << ", form is not signed";
    out << std::endl;    
    return (out);
}
