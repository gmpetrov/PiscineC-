/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ammo.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 15:55:02 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/12 00:23:29 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ammo.hpp"

Ammo::Ammo(void) : _x(0), _y(0){
}

Ammo::Ammo(Ammo const & src) : _x(0), _y(0){
	*this = src;
}

Ammo::~Ammo(void){

}

Ammo &	Ammo::operator=(Ammo const & rhs){
	(void)rhs;
	return *this;
}

std::string		Ammo::getType(){
	return this->_type;
}

int				Ammo::getX(){
	return this->_x;
}
int				Ammo::getY(){
	return this->_y;
}
void			Ammo::setX(int x){
	this->_x = x;
}
void			Ammo::setY(int y){
	this->_y = y;
}