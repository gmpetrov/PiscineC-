/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AmmoPlayer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 16:09:51 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/11 21:06:22 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AmmoPlayer.hpp"

AmmoPlayer::AmmoPlayer(void){
	this->_x = 5;
	AmmoPlayer::nb++;
	AmmoPlayer::nbInstance++;
}

AmmoPlayer::AmmoPlayer(AmmoPlayer const & src) : Ammo(src){
	this->_x = 5;
	AmmoPlayer::nb++;
	AmmoPlayer::nbInstance++;
	*this = src;
}

AmmoPlayer::~AmmoPlayer(void){
	AmmoPlayer::nbInstance--;
}

AmmoPlayer &	AmmoPlayer::operator=(AmmoPlayer const & rhs){
	(void)rhs;
	return *this;
}

int				AmmoPlayer::getNb(){
	return AmmoPlayer::nb;
}

void 			AmmoPlayer::setNb(int nb){
	AmmoPlayer::nb = nb;
}

int				AmmoPlayer::getNbInstance(){
	return AmmoPlayer::nbInstance;
}

void 			AmmoPlayer::setNbInstance(int nb){
	AmmoPlayer::nbInstance = nb;
}

int			AmmoPlayer::nb = 0;
int			AmmoPlayer::nbInstance = 0;