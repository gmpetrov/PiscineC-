# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/05 17:40:16 by gpetrov           #+#    #+#              #
#    Updated: 2015/01/12 02:28:33 by gpetrov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_retro
FILES	= main.cpp Window.cpp Grid.cpp Ship.cpp Player.cpp Weapon.cpp RayGun.cpp Ammo.cpp AmmoPlayer.cpp Enemy.cpp EnemyBasic.cpp
OBJS	= $(FILES:%.cpp=.obj/%.o)
INC 	= Window.hpp Grid.hpp Ship.hpp Player.hpp Weapon.hpp RayGun.hpp Ammo.hpp AmmoPlayer.hpp Enemy.hpp EnemyBasic.hpp
FLAGS	= -Wall -Wextra -Werror
LIB		= -lncurses
CC		= g++	

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $(NAME) -lncurses 
	@echo "\n > \033[36m$(NAME)\033[m project compilation [\033[32mDONE\033[m]\n"

.obj/%.o: %.cpp
	@mkdir -p .obj
	@g++ -c $< -o $@ $(FLAGS)
	@echo -n .

clean:
	@rm -rf .obj

fclean: clean
	@rm -f $(NAME)
	@echo "fclean : [\033[32mDONE\033[m]"

re: fclean all

.PHONY: all clean fclean re