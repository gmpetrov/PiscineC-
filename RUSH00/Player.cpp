/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 22:34:48 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/10 23:30:37 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"

Player::Player(void) : Ship(3, 3){

}

Player::Player(Player const & src) : Ship(src, 3, 3){
	*this = src;
}

Player::~Player(void){

}

Player &	Player::operator=(Player const & rhs){
	(void)rhs;
	return *this;
}

void		Player::attack(){
	return ;
}