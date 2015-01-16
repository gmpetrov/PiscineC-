/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 23:04:17 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/08 23:04:18 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0, 2, 3, 4, 5, 6){
	std::cout << "(DAUGTHER) YO I'AM A FUCK'IN NINJA MAN !!" << name << std::endl;
	return;
}

NinjaTrap::~NinjaTrap(void){
	std::cout << "(DAUGTHER) ("+this->_name+")" + " YO YOU KILLED A NINJA MAN" << std::endl;

	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src, std::string name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0, 2, 3, 4, 5, 6){
	std::cout << "Hi, i'am a lame version of FragTrap. Designation: " << name << std::endl;
	*this = src;
}

NinjaTrap &	NinjaTrap::operator=(NinjaTrap const & rhs){
	(void)rhs;
	return *this;
}

void	NinjaTrap::ninjaShoebox(std::string target){
	std::cout << this->_name << " is summoning a ninja god that is farting in " << target << " face" << std::endl;
}

unsigned int	NinjaTrap::getGodFart(void){
	return 42000;
}