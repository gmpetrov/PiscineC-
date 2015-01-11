/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 22:34:48 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/11 18:45:23 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"

Player::Player(void) : Ship(3, 3){
	this->getWeapon()->getAmmo()->setX(5);
}

Player::Player(Player const & src) : Ship(src, 3, 3){
	*this = src;
}

Player::~Player(void){

}

Player &	Player::operator=(Player const & rhs){
	(void)rhs;
	return *this;
}

void		Player::attack(){
	if (this->getWeapon()->getAmmo()->getNb() > 0){
		this->getWeapon()->getAmmo()->setNb(this->getWeapon()->getAmmo()->getNb() - 1);
		this->getWeapon()->getAmmo()[this->getWeapon()->getAmmo()->getNb()].setY(this->getY());
		this->getWeapon()->getAmmo()[this->getWeapon()->getAmmo()->getNb()].setX(this->getX() + 1);
	}
	return ;
}