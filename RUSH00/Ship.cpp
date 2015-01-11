/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 22:30:43 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/11 22:33:09 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ship.hpp"

Ship::Ship(int hp, int maxHp) : _x(0), _y(0), _hp(hp), _maxHp(maxHp), weapon(new RayGun()){
	this->next = NULL;
	this->prev = NULL;
}

Ship::Ship(Ship const & src, int hp, int maxHp) : _x(0), _y(0), _hp(hp), _maxHp(maxHp), weapon(new RayGun()){
	this->next = NULL;
	this->prev = NULL;
	*this = src;
}

Ship::~Ship(void){

}

Ship &	Ship::operator=(Ship const & rhs){
	(void)rhs;
	return *this;
}

int		Ship::getX(){
	return this->_x;
}

int		Ship::getY(){
	return this->_y;
}

void		Ship::setY(int y){
	this->_y = y;
}
void		Ship::setX(int x){
	this->_x = x;
}

int			Ship::getHP(void){
	return this->_hp;
}

int			Ship::getMaxHP(void){
	return this->_maxHp;
}

Weapon 		*Ship::getWeapon(){
	return this->weapon;
}

void		Ship::setHP(int y){
	this->_hp = y;
}
