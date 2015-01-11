/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ammo.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 15:55:02 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/11 16:03:04 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ammo.hpp"

Ammo::Ammo(void){

}

Ammo::Ammo(Ammo const & src){
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