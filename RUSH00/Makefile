# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/05 17:40:16 by gpetrov           #+#    #+#              #
#    Updated: 2015/01/10 23:00:40 by gpetrov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_retro
FILE = main.cpp Window.cpp Grid.cpp Ship.cpp Player.cpp Weapon.cpp RayGun.cpp

all: $(NAME)

$(NAME):
	g++ -Wall -Wextra -Werror -lncurses $(FILE) -o $(NAME)
clean:
	rm -rf *.o
fclean:
	rm -rf $(NAME)
re: fclean all
