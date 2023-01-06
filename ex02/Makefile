# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/29 20:09:48 by adiouane          #+#    #+#              #
#    Updated: 2023/01/03 20:10:46 by adiouane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := a.out

SRC := main.cpp Bureaucrat.cpp Form.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp\

GCC := c++ -Werror -Wextra -Wall  -std=c++98  #-fsanitize=thread

all : $(NAME)

$(NAME) : $(SRC)
		@$(GCC) $(SRC) -o $(NAME)

clean :
	@echo "Cleaning up..."

fclean :
	@rm -f $(NAME)

re : fclean all
