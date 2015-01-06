/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 20:06:28 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/06 21:50:47 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type){
	return ;
}

Weapon::~Weapon(void){
	return ;
}

void				Weapon::setType(std::string type){
	this->_type = type;
}

std::string const	&Weapon::getType(void){
	return	this->_type;
}
