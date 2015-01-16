/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 11:56:41 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/08 21:32:21 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3, 20, 20, 30, 5, 0){
	std::cout << "(DAUGTHER) Hi, i'am a les better version of FragTrap. Designation: " << name << std::endl;
	return;
}

ScavTrap::~ScavTrap(void){
	std::cout << "(DAUGTHER) ("+this->_name+")" + " OK, you got me, i'm dead now." << std::endl;

	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src, std::string name) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3, 20, 20, 30, 5, 0){
	std::cout << "Hi, i'am a lame version of FragTrap. Designation: " << name << std::endl;
	*this = src;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs){
	(void)rhs;
	return *this;
}

void	ScavTrap::challengeNewcomer(std::string const & target){
	std::cout << ClapTrap::getName() << " uses is random challenge function" << std::endl;

	void (ScavTrap::* tab[])(std::string const & target) = { &ScavTrap::bigBangAttack, &ScavTrap::specialKunkFuKickAttack, &ScavTrap::kickInBallsAttack, &ScavTrap::spitAttack, &ScavTrap::hugAttack };

	int		ran;
	srand (time(NULL));
	ran = rand() % 4 + ScavTrap::counter;
	if (ran > 4){
		ScavTrap::counter = 0;
		ran = 0;
	}
	ScavTrap::counter++;
	return 	(this->*tab[ran])(target);

}

void	ScavTrap::bigBangAttack(std::string const & target){
	std::cout <<"[challenge] : " <<	ClapTrap::getName() << " piss on " << target << "with his oil tank" << std::endl;
}

void	ScavTrap::specialKunkFuKickAttack(std::string const & target){
	std::cout <<"[challenge] : " <<	ClapTrap::getName() << " is playing Rock Paper Scissors with " << target << std::endl;
}

void	ScavTrap::kickInBallsAttack(std::string const & target){
	(void)target;
	std::cout <<"[challenge] : " <<	ClapTrap::getName() << " is moonwalking " << std::endl;
}

void	ScavTrap::spitAttack(std::string const & target){
	(void)target;
	std::cout <<"[challenge] : " <<	ClapTrap::getName() << " is juggling with some rocks" << std::endl;
}

void	ScavTrap::hugAttack(std::string const & target){
	(void)target;
	std::cout <<"[challenge] : " <<	ClapTrap::getName() << " is eating chilli sauce (but feels nothing because he is a robot)" << std::endl;
}

int		ScavTrap::counter = 0;
