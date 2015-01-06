/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 18:15:37 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/06 19:56:01 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "Brain.hpp"

Brain::Brain(void){
	const void *addr = static_cast <const void*> (this);
	std::stringstream addr2;
	addr2 << addr;
	this->_addr = addr2.str();
	return ;
}

Brain::~Brain(void){
	return ;
}

std::string		Brain::identify(void) const{
	return this->_addr;
}
