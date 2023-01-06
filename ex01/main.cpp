/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 22:40:11 by adiouane          #+#    #+#             */
/*   Updated: 2023/01/06 18:50:27 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat b1("\033[0;32mBureaucrat1\033[0;20m", 2);
        Form tmp("\033[0;32mForm-adiouane\033[0;20m", 3, 2);
        tmp.beSigned(b1);
        b1.signForm(tmp);
        // std::cout << tmp << std::endl; // information
        // std::cout << b1 << std::endl; // information
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}
