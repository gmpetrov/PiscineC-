/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 18:16:48 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/06 19:51:47 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) : brain(Brain()){
	return ;
}

Human::~Human(void){
	return ;
}

std::string		Human::identify(void) const{
	return this->brain.identify();
}

Brain			Human::getBrain(void){
	return this->brain;
}
