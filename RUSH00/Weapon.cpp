/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 22:38:31 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/12 00:35:37 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

Weapon::Weapon(std::string name) : _name(name){
}

Weapon::Weapon(Weapon const & src, std::string name) : _name(name){
	*this = src;
}

Weapon::~Weapon(void){

}

Weapon &	Weapon::operator=(Weapon const & rhs){
	(void)rhs;
	return *this;
}

std::string		Weapon::getName(){
	return this->_name;
}

Ammo			*Weapon::getAmmo(){
	return this->_ammo;
}

void			Weapon::setAmmo(Ammo *ammo){
	this->_ammo = ammo;
}