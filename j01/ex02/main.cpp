/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 14:41:13 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/06 16:35:13 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <time.h>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

std::string	randName(void)
{
	char *tab[] = {
		(char *)"henry",
		(char *)"paul",
		(char *)"jean",
		(char *)"jacques",
		(char *)"Leonard",
		(char *)"David",
		(char *)"Marc",
		(char *)"Paulette",
		(char *)"Robert",
		(char *)"Georges",
		
	};

	int rand = time(NULL) % 10;
	return ((std::string) tab[rand]);
}

void	randomChump(void)
{
	std::cout << "randomChump() called" << std::endl;
	ZombieEvent	event = ZombieEvent();
	event.setZombieType("Basic Walker");
	Zombie *newZombie = event.newZombie(randName());
	newZombie->announce();
	delete newZombie;
}

int		main(void){
	std::cout << "********** HEAP STYLE ************" << std::endl;
	randomChump();
	std::cout << "*********** STACK STYLE ***********" << std::endl;
	Zombie runner = Zombie("Runner", "Emilien");
	runner.announce();
	return 0;
}
