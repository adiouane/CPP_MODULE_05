/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 22:40:11 by adiouane          #+#    #+#             */
/*   Updated: 2023/01/06 03:11:14 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("John", 3);
        std::cout << b << std::endl;
        b.increment_grade();
        std::cout << b << std::endl;
        b.increment_grade();
        std::cout << b << std::endl;
        b.increment_grade();
        std::cout << b << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
