/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 17:41:46 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/11 16:26:36 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Window.hpp"

Window::Window(void){

}

Window::Window(Window const & src){
	*this = src;
}

Window::~Window(void){

}

Window &	Window::operator=(Window const & rhs){
	(void)rhs;
	return *this;
}


int 		Window::getWidth(){
	return this->_width;
}

int 		Window::getHeigth(){
	return this->_heigth;
}


void		Window::init(void){
	initscr();
	getmaxyx(stdscr, this->_heigth, this->_width);
	curs_set(FALSE);
	keypad(stdscr, TRUE);
	timeout(0);
	start_color();
	init_pair(1, COLOR_RED, COLOR_BLACK);
	attron(COLOR_PAIR(1));
	wborder(stdscr, 0, 0, 0, 0, 0, 0, 0, 0);
	refresh();
}

void		Window::initData(void){
	int i = 0;

	srandom(time(NULL));
	this->grid = new Grid[this->_width];
	this->grid[this->_width - 1]._top = this->_heigth / 2;
  	this->grid[this->_width - 1]._bottom = this->grid[this->_width - 1]._top * MARGIN;

  	this->player = new Player();
  	this->player->setX(5);
  	this->player->setY(this->_heigth / 2);
  	mvaddch(this->player->getY(), this->player->getY(), PLAYER);
  	while (i < this->_width){
  		this->generateMap();
  		i++;
  	}
}
void		Window::generateMap(){
	int 	i = 0;
	int 	ran;

	while (i < (this->_width - 1)){
    	this->grid[i]._top    = this->grid[i + 1]._top;
    	this->grid[i]._bottom = this->grid[i + 1]._bottom;
    	i++;
	}

	/* TOP  */

	ran = random() % 5;
	if (ran == 0){
		this->grid[this->_width - 1]._top--;
	    if (this->grid[this->_width - 1]._top < MARGIN) {
	      this->grid[this->_width - 1]._top++;
	    }
	}
	else if (ran == 1){
		this->grid[this->_width - 1]._top++;
	    if (this->grid[this->_width - 1]._top > this->grid[this->_width - 1]._bottom - MARGIN) {
	      this->grid[this->_width - 1]._top--;
	    }
	}

	/* BOTTOM  */

	ran = random() % 5;
	if (ran == 0){
		this->grid[this->_width - 1]._bottom++;
		if (this->grid[this->_width - 1]._bottom > this->_heigth - 2) {
			this->grid[this->_width - 1]._bottom--;
		}
	}
	else if (ran == 1){
		this->grid[this->_width - 1]._bottom--;
		if (this->grid[this->_width - 1]._bottom <=
		  this->grid[this->_width - 1]._top + 2) {
		  this->grid[this->_width - 1]._bottom++;
		}
	}
}

void		Window::update(void){
	int 	i = 0;
	int 	j = 0;

	erase();

	while (i < this->_width){
		while (j < this->grid[i]._top){
			mvaddch(j, i, WALL);
			j++;
		}
		j = this->grid[i]._bottom;
		while (j < this->_heigth){
			mvaddch(j, i, WALL);
			j++;
		}
		i++;
		j = 0;
	}
	mvprintw(0, 0, "%d/%d HP, ammo : %d ", this->player->getHP(), this->player->getMaxHP(), this->player->getWeapon()->getAmmo()->getNb());
	mvaddch(this->player->getY(), this->player->getX(), PLAYER);
	refresh();
}

void		Window::collision(){
	int 	i = 0;

	while (i < (this->_width - 1)){
		if (this->player->getY() < this->grid[this->player->getX() - 1]._top){
			if (this->player->getHP() > 0){
				this->player->setHP(this->player->getHP() - 1);
				this->player->setY(this->grid[this->player->getX()]._bottom - 2);

			}
		}
		else if (this->player->getY() > this->grid[this->player->getX() - 1]._bottom - 1){
			this->player->setHP(this->player->getHP() - 1);
			this->player->setY(this->grid[this->player->getX()]._bottom - 2);			
		}
		i++;
	}
}

void		Window::play(void){
	int  key;
	while (42){

		while ((key = getch()) != ERR){
			if (key == KEY_UP){
				this->player->setY(this->player->getY() - 1);
			}
			else if (key == KEY_DOWN){
				this->player->setY(this->player->getY() + 1);
			}
		}
		key = getch();
		this->generateMap();
		this->update();
		this->collision();
		usleep(100000);
	}
}