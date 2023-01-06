/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:29:11 by adiouane          #+#    #+#             */
/*   Updated: 2023/01/06 01:08:43 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const &obj);
        RobotomyRequestForm& operator=(RobotomyRequestForm const &obj);
        ~RobotomyRequestForm();
        RobotomyRequestForm(std::string const &target);
        
        void execute(Bureaucrat const &executor) const;

        std::string  getTarget(void) const;

};

#endif