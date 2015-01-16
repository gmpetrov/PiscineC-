/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 11:57:05 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/09 12:01:24 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title){
	std::cout << name << ", " << title << ", is born !" << std::endl;
	return ;
}

Sorcerer::~Sorcerer(void){
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
	return ;
}

Sorcerer::Sorcerer(Sorcerer const & src, std::string name, std::string title) : _name(name), _title(title){
	*this = src;
	return ;
}

Sorcerer &	Sorcerer::operator=(Sorcerer const & rhs){
	(void)rhs;
	return *this;
}

std::string 	Sorcerer::introduce(void) const{
	return "I am " + this->_name + ", " + this->_title + ", and I like ponies !\n";

}

void 			Sorcerer::polymorph(Victim const & victim) const{
	victim.getPolymorphed();
}

std::ostream & 	operator<<(std::ostream & o, Sorcerer const & i){
	return o << i.introduce();
}