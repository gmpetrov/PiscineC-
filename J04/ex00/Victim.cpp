/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 12:05:03 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/09 12:08:58 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name){
	std::cout << "Some random victim called " << name << " just popped !" << std::endl;
	return ;
}

Victim::~Victim(void){
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
	return ;
}

Victim::Victim(Victim const & src, std::string name) : _name(name){
	std::cout << "Some random victim called " << name << " just popped !" << std::endl;
	*this = src;
}

Victim &	Victim::operator=(Victim const & src){
	(void)src;
	return *this;
}

std::string		Victim::introduce(void) const{
	return "I'm " + this->_name + " and i like otters !\n";
}


void			Victim::getPolymorphed(void) const{
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}


std::ostream &	operator<<(std::ostream & o, Victim const & i){
	return o << i.introduce();
}