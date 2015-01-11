/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 19:11:23 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/11 21:18:00 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, int maxHp) : Ship(hp, maxHp){

}

Enemy::Enemy(Enemy const & src, int hp, int maxHp) : Ship(src, hp, maxHp){
	*this = src;
}

Enemy::~Enemy(void){

}

Enemy &	Enemy::operator=(Enemy const & rhs){
	(void)rhs;
	return *this;
}

void		Enemy::attack(){
	return ;
}
