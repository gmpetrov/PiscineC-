/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 17:41:46 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/12 02:00:04 by gpetrov          ###   ########.fr       */
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
	timeout(25);
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
  	while (i < this->_width){
  		this->generateMap();
  		i++;
  	}
  	this->player = new Player();
  	this->player->getWeapon()->setAmmo(new AmmoPlayer[NB_AMMO]);
  	this->player->setX(PLAYER_X);
  	this->player->setY((this->grid[this->player->getX()]._bottom + this->grid[this->player->getX()]._top) / 2);
  	mvaddch(this->player->getY(), this->player->getY(), PLAYER);
  	this->enemy = NULL;
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
	mvprintw(0, 0, " BOARD : %d/%d HP, ammo : %d, time : %d , score : %d ", this->player->getHP(), this->player->getMaxHP(), this->player->getWeapon()->getAmmo()->getNb(), Window::timer, Window::score);
	mvaddch(this->player->getY(), this->player->getX(), PLAYER);
	this->moveAmmo();
	this->generateEnemy();
	this->moveEnemy();
	Window::timer++;
	refresh();
}

void		Window::collision(){
	int 	i = 0;
	int     mid;

	while (i < (this->_width)){
		if (this->player->getY() < this->grid[this->player->getX() - 1]._top){
			if (this->player->getHP() > 0){
				this->player->setHP(this->player->getHP() - 1);
				mid = (this->grid[this->player->getX()]._bottom + this->grid[this->player->getX()]._top) / 2;
				this->player->setY(mid);

			}
		}
		else if (this->player->getY() > this->grid[this->player->getX() - 1]._bottom - 1){
			if (this->player->getHP() > 0){
				this->player->setHP(this->player->getHP() - 1);
				mid = (this->grid[this->player->getX()]._bottom + this->grid[this->player->getX()]._top) / 2;
				this->player->setY(mid);			
			}
		}
		i++;
	}
}

void		Window::moveAmmo(){
	int 	i = 0;

	while (i < this->player->getWeapon()->getAmmo()[0].getNbInstance()){
		if (this->player->getWeapon()->getAmmo()[i].getX() != this->player->getX()){
			this->player->getWeapon()->getAmmo()[i].setX(this->player->getWeapon()->getAmmo()[i].getX() + 1);
		}
		if (this->player->getWeapon()->getAmmo()[i].getY() <= this->grid[this->player->getWeapon()->getAmmo()[i].getX() - 1]._top){
			this->player->getWeapon()->getAmmo()[i].setX(-1000);
		}
		else if (this->player->getWeapon()->getAmmo()[i].getY() >= this->grid[this->player->getWeapon()->getAmmo()[i].getX() - 1]._bottom){
			this->player->getWeapon()->getAmmo()[i].setX(-1000);
		}
		else if (this->bulletCollisionEnemy(this->player->getWeapon()->getAmmo()[i].getX(), this->player->getWeapon()->getAmmo()[i].getY()) == true){
			this->player->getWeapon()->getAmmo()[i].setX(-1000);	
		}
		mvaddch(this->player->getWeapon()->getAmmo()[i].getY(), this->player->getWeapon()->getAmmo()[i].getX(), BULLET);
		i++;
	}
	return ;
}

void	Window::deleteEnemy(Ship *toDelete){
	if (toDelete == this->enemy && Window::nbEnemy == 1)
		this->enemy = NULL;
	else if (toDelete == this->enemy && Window::nbEnemy > 1){
		this->enemy = this->enemy->next;
		if (this->enemy->next != NULL)
			this->enemy->next->prev = this->enemy;
	}
	else{
		if (toDelete->prev != NULL)
		toDelete->prev->next = toDelete->next;
		if (toDelete->next != NULL)
			toDelete->next->prev = toDelete->prev;
	}
	toDelete->~Ship();
	Window::nbEnemy--;
}

bool 	  Window::bulletCollisionEnemy(int x, int y){
	Ship   *tmp = this->enemy;
	while (tmp){
		if (((tmp->getX() + 1) == x || (tmp->getX() + 2) == x || tmp->getX() == x)  && tmp->getY() == y){
			this->deleteEnemy(tmp);
			Window::score++;
			return true;
		}
		tmp = tmp->next;
	}
	return false ;
}

void		Window::moveEnemy(){
	Ship   *tmp = this->enemy;
	while (tmp != NULL){
		if (tmp != NULL){
			this->enemyIA(tmp);
		}
		tmp = tmp->next;
	}
	return ;
}

void		Window::generateEnemy(){

	if (Window::nbEnemy == 5)
		return ;
	Window::nbEnemy++;
	Ship 	*tmp = this->enemy;
	Ship 	*newEn = new EnemyBasic();
	newEn->prev = NULL;
	newEn->next = NULL;
	int x = (random() % (this->_width - (this->_width / 2))) + (this->_width / 2);
	int y = (random() % ((this->grid[x]._bottom - this->grid[x]._top))) + this->grid[x]._top;
	newEn->setX(x);
	newEn->setY(y);
	if (this->enemy == NULL){
		this->enemy = newEn;
		return ;
	}
	while (tmp->next){
		tmp = tmp->next;
	}
	tmp->next = newEn;
	newEn->prev = tmp;
}

void 		Window::enemyIA(Ship *enemy){
	if (enemy->getX() <= 3 || (this->grid[enemy->getX()]._top >= this->enemy->getY() || this->grid[enemy->getX()]._bottom <= this->enemy->getY())){
		this->deleteEnemy(enemy);
		return ;
	}
	else if (enemy->getX() == this->player->getX() && enemy->getY() == this->player->getY()){
		this->deleteEnemy(enemy);
		this->player->setHP(this->player->getHP() - 1);
		return ;
	}
	enemy->setX(enemy->getX() - 2);
	if (this->player->getY() > enemy->getY())
		enemy->setY(enemy->getY() + 1);
	else if (this->player->getY() < enemy->getY())
		enemy->setY(enemy->getY() - 1);
	mvaddch(enemy->getY(), enemy->getX(), ENEMY_BASIC);
	return ;
}

void		Window::endGame(void){
	endwin();
	std::cout << "YOU DIED - (SCORE : " << Window::score << " , TIME : " << Window::timer << ")" << std::endl;
	exit(0);
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
			else if (key == ' '){
				this->player->attack();
			}
		}
		this->generateMap();
		this->update();
		this->collision();
		if (this->player->getHP() <= 0)
			this->endGame();
	}
}

int 		Window::timer = 0;
int 		Window::score = 0;
int 		Window::nbEnemy = 0;