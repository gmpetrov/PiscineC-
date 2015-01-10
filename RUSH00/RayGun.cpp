/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RayGun.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 22:58:07 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/10 23:20:32 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RayGun.hpp"

RayGun::RayGun(void) : Weapon("Ray Gun", 20){
}

RayGun::RayGun(RayGun const & src) : Weapon("Ray Gun", 20){
	*this = src;
}

RayGun::~RayGun(void){

}

RayGun &	RayGun::operator=(RayGun const & rhs){
	(void)rhs;
	return *this;
}
