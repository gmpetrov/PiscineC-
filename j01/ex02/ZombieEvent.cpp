/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 14:57:33 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/06 16:27:03 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void){
	return ;
}

ZombieEvent::~ZombieEvent(void){
	return ;
}

void	ZombieEvent::setZombieType(std::string type){
	std::cout << "setZombieType() called" << std::endl;
	this->_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name){
	std::cout << "newZombie() called" << std::endl;
	Zombie *newZombie = new Zombie(this->_type, name);
	return newZombie;
}
