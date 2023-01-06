/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 22:40:11 by adiouane          #+#    #+#             */
/*   Updated: 2023/01/06 03:16:53 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat b1("Bureaucrat1", 1);
        Form tmp("tmp", 1, 2);
        b1.signForm(tmp);
        tmp.beSigned(b1);
        std::cout << tmp << std::endl;
        std::cout << b1 << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}
