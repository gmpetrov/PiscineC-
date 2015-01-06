/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 14:39:29 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/06 16:24:34 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name) : _type(type), _name(name){
	std::cout << "Zombie Contructor called" << std::endl;
	return ;
}

Zombie::~Zombie(void){
	std::cout << "Zombie Destructor called" << std::endl;
	return ;
}

std::string		Zombie::getName(void){
	return this->_name;
}

std::string		Zombie::getType(void){
	return this->_type;
}

void		Zombie::announce(void){
	std::cout << "<" << this->getName() << " (" << this->getType() << ")> Braiiiiiiinnnssss..." << std::endl;
}
