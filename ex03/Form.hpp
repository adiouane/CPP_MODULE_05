/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 21:52:23 by adiouane          #+#    #+#             */
/*   Updated: 2023/01/06 18:44:43 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include <fstream>
class Bureaucrat;

class Form
{
    private:
        const std::string   _name;
        bool                _is_signed;
        const int           _grade_to_signed;
        const int           _to_execute;
    public:
        Form();
        Form(Form const &obj);
        Form& operator=(Form const &obj);
        virtual ~Form(); //because i need to delete on main 
        Form(std::string const &name, int to_signed, int to_execute);
        /*GETTERS*/


        std::string getName() const;
        bool getIsSigned() const;
        int getToSigned() const;
        int getToExecute() const;
        void beSigned(Bureaucrat const &obj);


        /*NESTED CLASS*/
        class GradeTooHighException : public std::exception{
            public:
                const char*what()const throw();
        };
        class GradeTooLowException : public std::exception{
            public:
                const char*what()const throw();
        };
        class FormNotSignedException : public std::exception{
            public:
                const char*what()const throw();
        };
        
        virtual void execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, const Form &obj);
#endif