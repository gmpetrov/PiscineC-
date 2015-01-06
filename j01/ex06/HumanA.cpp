/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 20:06:40 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/06 21:52:15 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon){
	return ;
}

HumanA::~HumanA(void){
	return ;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
