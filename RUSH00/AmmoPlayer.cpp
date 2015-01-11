/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AmmoPlayer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 16:09:51 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/11 16:26:16 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AmmoPlayer.hpp"

AmmoPlayer::AmmoPlayer(void){
	AmmoPlayer::nb++;
}

AmmoPlayer::AmmoPlayer(AmmoPlayer const & src) : Ammo(src){
	AmmoPlayer::nb++;
	*this = src;
}

AmmoPlayer::~AmmoPlayer(void){
	AmmoPlayer::nb--;
}

AmmoPlayer &	AmmoPlayer::operator=(AmmoPlayer const & rhs){
	(void)rhs;
	return *this;
}

int				AmmoPlayer::getNb(){
	return AmmoPlayer::nb;
}

int			AmmoPlayer::nb = 0;