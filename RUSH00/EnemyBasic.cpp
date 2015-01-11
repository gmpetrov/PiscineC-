/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnemyBasic.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 19:18:41 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/12 00:19:12 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EnemyBasic.hpp"

EnemyBasic::EnemyBasic(void) : Enemy(1, 1){
}

EnemyBasic::EnemyBasic(EnemyBasic const & src) : Enemy(src, 1, 1){
	*this = src;
}

EnemyBasic::~EnemyBasic(void){

}

EnemyBasic &	EnemyBasic::operator=(EnemyBasic const & rhs){
	(void)rhs;
	return *this;
}

void		EnemyBasic::attack(){
	return ;
}

int			EnemyBasic::getNb(){
	return EnemyBasic::nb;
}

int			EnemyBasic::nb = 0;