/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 13:35:02 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/06 14:00:14 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string color, std::string sex, std::string name) : _color(color), _sex(sex), _name(name){
	std::cout << "Constructor called" << std::endl;	
	return ;
}

Pony::~Pony(void){
	std::cout << "Destructor called" << std::endl;	
	return ;
}

std::string	Pony::getColor(void){
	return this->_color;
}

std::string	Pony::getName(void){
	return this->_name;
}

std::string	Pony::getSex(void){
	return this->_sex;
}

void	Pony::setColor(std::string color){
	this->_color = color;
}

void	Pony::setName(std::string name){
	this->_name = name;
}

void	Pony::setSex(std::string sex){
	this->_sex = sex;
}

