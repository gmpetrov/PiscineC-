/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 11:56:41 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/08 20:49:14 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5, 22, 23, 33, 8, 1){
	std::cout << "(DAUGHTER) Booting sequence complete. Hello! I am your new steward bot. Designation: " << name << ", Hyperion Robot, Class C. Please adjust factory settings to meet your needs before deployment." << std::endl;
	return;
}

FragTrap::~FragTrap(void){
	std::cout << "(DAUGHTER) ("+this->_name+")" + " I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & src, std::string name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5, 22, 23, 33, 8, 1){
	std::cout << "(DAUGHTER) Booting sequence complete. Hello! I am your new steward bot. Designation: " << name << ", Hyperion Robot, Class C. Please adjust factory settings to meet your needs before deployment." << std::endl;
	*this = src;
}

FragTrap &	FragTrap::operator=(FragTrap const & rhs){
	(void)rhs;
	return *this;
}

unsigned int	FragTrap::vaulthunter_dot_exe(std::string const & target){
	if (this->_energyPoints < 25){
		std::cout << this->_name << " doesn't have enough energy to launch a random attack" << std::endl;
		return 0;
	}
	this->_energyPoints -= 25;
	std::cout << this->_name << " uses is random attack function" << std::endl;

	unsigned int (FragTrap::* tab[])(std::string const & target) = { &FragTrap::bigBangAttack, &FragTrap::specialKunkFuKickAttack, &FragTrap::kickInBallsAttack, &FragTrap::spitAttack, &FragTrap::hugAttack };

	int		ran;
	srand (time(NULL));
	ran = rand() % 4 + FragTrap::counter;
	if (ran > 4){
		FragTrap::counter = 0;
		ran = 0;
	}
	FragTrap::counter++;
	return 	(this->*tab[ran])(target);

}

unsigned int	FragTrap::bigBangAttack(std::string const & target){
	std::cout << this->_name << " attacks " << target << " with a Big Bang Attack !!!" << std::endl;
	return this->getBigBangDamage();
}

unsigned int	FragTrap::specialKunkFuKickAttack(std::string const & target){
	std::cout << this->_name << " attacks " << target << " with a Special KungFu Kick Attack !!!" << std::endl;
	return this->getSpecialKungFuKickDamage();
}

unsigned int	FragTrap::kickInBallsAttack(std::string const & target){
	std::cout << this->_name << " attacks " << target << " with a Kick in the Balls Attack !!!" << std::endl;
	return this->getKickInBallsDamage();
}

unsigned int	FragTrap::spitAttack(std::string const & target){
	std::cout << this->_name << " attacks " << target << " with a Spit Attack !!!" << std::endl;
	return this->getSpitDamage();
}

unsigned int	FragTrap::hugAttack(std::string const & target){
	std::cout << this->_name << " attacks " << target << " with a Hug Attack !!!" << std::endl;
	return this->getHugBangDamage();
}

int		FragTrap::counter = 0;
