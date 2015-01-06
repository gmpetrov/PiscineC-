/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 20:06:55 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/06 22:03:06 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){
	return ;
}

HumanB::~HumanB(void){
	return ;
}

void		HumanB::setWeapon(Weapon &weapon){
	this->_weapon = &weapon;
}

void		HumanB::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;	
}
