/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 13:00:58 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/09 13:00:59 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name){
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon(Peon const & src, std::string name) : Victim(name){
	std::cout << "(Peon) Some random victim called " << name << " just popped !" << std::endl;
	*this = src;
}

Peon::~Peon(void){
	std::cout << "Bleuark..." << std::endl;
	return ;
}


Peon &	Peon::operator=(Peon const & src){
	(void)src;
	return *this;
}

void			Peon::getPolymorphed(void) const{
	std::cout << this->_name << "  has been turned into a pink pony !" << std::endl;
}


std::ostream &		operator<<(std::ostream & o, Peon const & i){
	return o << i.introduce();
}