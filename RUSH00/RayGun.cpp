/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RayGun.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 22:58:07 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/12 00:32:25 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RayGun.hpp"

RayGun::RayGun(void) : Weapon("Ray Gun"){
}

RayGun::RayGun(RayGun const & src) : Weapon("Ray Gun"){
	*this = src;
}

RayGun::~RayGun(void){

}

RayGun &	RayGun::operator=(RayGun const & rhs){
	(void)rhs;
	return *this;
}
