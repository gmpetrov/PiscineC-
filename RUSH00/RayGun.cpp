/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RayGun.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 22:58:07 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/11 18:58:10 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RayGun.hpp"

RayGun::RayGun(void) : Weapon("Ray Gun", new AmmoPlayer[10000]){
}

RayGun::RayGun(RayGun const & src) : Weapon("Ray Gun", new AmmoPlayer[10000]){
	*this = src;
}

RayGun::~RayGun(void){

}

RayGun &	RayGun::operator=(RayGun const & rhs){
	(void)rhs;
	return *this;
}
