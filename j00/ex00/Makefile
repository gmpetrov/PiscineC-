# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/05 16:29:25 by gpetrov           #+#    #+#              #
#    Updated: 2015/01/05 17:25:51 by gpetrov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
FILE	= megaphone.cpp

all: $(NAME)

$(NAME):
		g++ -Wall -Wextra -Werror $(FILE) -o $(NAME)
clean:
		rm rf *.o
fclean:
		rm -rf $(NAME)
re: fclean all
