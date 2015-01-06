/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 16:40:06 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/06 17:52:22 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N){
	std::cout << "ZombieHorde Constructor called" << std::endl;
	this->_n = N;
	this->_horde = new Zombie[N];
	return ;
}

ZombieHorde::~ZombieHorde(void){
	std::cout << "ZombieHorde Destructor called" << std::endl;
	delete [] this->_horde;
	return ;
}

void	ZombieHorde::announce(void){
	int		i;

	i = 0;
	while (i < this->_n)
	{
		this->_horde[i].announce();
		i++;
	}
}
