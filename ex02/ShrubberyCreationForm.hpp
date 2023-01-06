/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:28:33 by adiouane          #+#    #+#             */
/*   Updated: 2023/01/06 01:12:34 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    private:
        std::string _target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm const &obj);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm const &obj);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(std::string const &target);
        
        void execute(Bureaucrat const &executor) const;

        std::string  getTarget(void) const;
};

#endif