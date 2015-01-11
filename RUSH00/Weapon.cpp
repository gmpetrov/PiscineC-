/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 22:38:31 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/11 18:34:41 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

Weapon::Weapon(std::string name, Ammo *ammo) : _name(name), _ammo(ammo){
}

Weapon::Weapon(Weapon const & src, std::string name, Ammo *ammo) : _name(name), _ammo(ammo){
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