# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/05 17:40:16 by gpetrov           #+#    #+#              #
#    Updated: 2015/01/11 20:19:52 by gpetrov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_retro
FILE = main.cpp Window.cpp Grid.cpp Ship.cpp Player.cpp Weapon.cpp RayGun.cpp Ammo.cpp AmmoPlayer.cpp Enemy.cpp EnemyBasic.cpp

all: $(NAME)

$(NAME):
	g++ -g -Wall -Wextra -Werror -lncurses $(FILE) -o $(NAME)
clean:
	rm -rf *.o
fclean:
	rm -rf $(NAME)
re: fclean all
