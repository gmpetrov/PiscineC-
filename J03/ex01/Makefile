# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/05 17:40:16 by gpetrov           #+#    #+#              #
#    Updated: 2015/01/08 18:32:34 by gpetrov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
FILE = main.cpp ScavTrap.cpp FragTrap.cpp

all: $(NAME)

$(NAME):
	g++ -Wall -Wextra -Werror $(FILE) -o $(NAME)
clean:
	rm -rf *.o
fclean:
	rm -rf $(NAME)
re: fclean all
