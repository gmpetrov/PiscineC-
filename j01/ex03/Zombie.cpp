/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 14:39:29 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/06 17:49:36 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
	if (Zombie::_counter > 9)
		Zombie::_counter = 0;
	this->_type = "Basic Walker";
	this->_name = this->randName(Zombie::getCounter());
	Zombie::_counter++;
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
std::string	Zombie::randName(int i)
{
	char *tab[] = {
		(char *)"henry",
		(char *)"paul",
		(char *)"jean",
		(char *)"jacques",
		(char *)"Leonard",
		(char *)"David",
		(char *)"Marc",
		(char *)"Paulette",
		(char *)"Robert",
		(char *)"Georges",
		
	};

	int rand = (time(NULL) % 10) + i;
	if (rand > 9)
		rand -= 10;
	return ((std::string) tab[rand]);
}

int		Zombie::getCounter(void){
	return Zombie::_counter;
}

int		Zombie::_counter = 0;
