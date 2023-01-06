/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 22:39:12 by adiouane          #+#    #+#             */
/*   Updated: 2023/01/06 01:03:06 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <exception>
#include <iostream>

class Bureaucrat{
    private:
        const std::string   _grad_name;
        int                 _grad_rang;
    public:
        Bureaucrat();
        Bureaucrat(Bureaucrat const &obj);
        Bureaucrat& operator=(Bureaucrat const &obj);
        ~Bureaucrat();
        Bureaucrat(std::string const &Name, int grade);

        /*GETTERS*/
        std::string getName() const;
        int         getGrade() const;
        void        increment_grade();
        void        decrement_grade();


        /*NESTED CLASS*/
        class GradeTooHighException : public std::exception{
            public:
                virtual const char*what()const throw();
        };
        class GradeTooLowException : public std::exception{
            public:
                virtual const char*what()const throw();
        };
};

std::ostream& operator<<(std::ostream &out, Bureaucrat const &obj);
#endif 