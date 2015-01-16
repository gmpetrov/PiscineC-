/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 11:56:41 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/08 20:20:40 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50), _level(1), _name(name), _meleeAttackDamagePoints(20), _rangedAttackDamagePoints(15), _armorDamageReductionPoints(3), _bigBangAttackDamagePoints(20), _specialKungFuKickAttackDamagePoints(20), _kickInBallsAttackDamagePoints(30), _spitAttackDamagePoints(5), _hugAttackDamagePoints(0){
	std::cout << "Hi, i'am a les better version of FragTrap. Designation: " << name << std::endl;
	return;
}

ScavTrap::~ScavTrap(void){
	std::cout << "("+this->_name+")" + " OK, you got me, i'm dead now." << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src, std::string name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50), _level(1), _name(name), _meleeAttackDamagePoints(20), _rangedAttackDamagePoints(15), _armorDamageReductionPoints(3), _bigBangAttackDamagePoints(20), _specialKungFuKickAttackDamagePoints(20), _kickInBallsAttackDamagePoints(30), _spitAttackDamagePoints(5), _hugAttackDamagePoints(0){
	std::cout << "Hi, i'am a lame version of FragTrap. Designation: " << name << std::endl;
	*this = src;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs){
	(void)rhs;
	return *this;
}

void	ScavTrap::rangedAttack(std::string const & target){
	std::cout << "FR4G-LAME "+this->_name+" attacks "+target+" at range, causing " << this->_rangedAttackDamagePoints << " points of damage !" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target){
	std::cout << "FR4G-LAME "+this->_name+" attacks "+target+" at melee, causing " << this->_meleeAttackDamagePoints << " points of damage !" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount){
	if (this->_hitPoints == 0){
		std::cout << "(" + this->_name +") LEAVE ME ALONE, I'M ALREADY DEAD !!" << std::endl;
		return ;
	}
	unsigned int damage = ((int)amount - (int)this->_armorDamageReductionPoints < 0 ? 0 : amount - this->_armorDamageReductionPoints);
	this->_hitPoints = ((int)this->_hitPoints - (int)damage < 0 ? 0 : this->_hitPoints - damage);
	std::cout << "(" + this->_name +")" + "Ouiiie (-" << damage << " hp, " << this->_hitPoints << " left)" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount){
		if (this->_energyPoints < amount){
			std::cout << "(" + this->_name + ") FUCK i'am lame and i can't heal myself, not enough energy points ... (" << this->_energyPoints << "/" << this->_maxEnergyPoints <<" energy points)" << std::endl;
			return ;
		}
		this->_energyPoints -= amount;
		this->_hitPoints = (this->_hitPoints + amount > this->_maxHitPoints ? this->_maxHitPoints : this->_hitPoints + amount);
		std::cout << this->_name << ", lame version of FragTrap, is healing, +"<<amount<<"HP (" << this->_hitPoints << "/" << this->_maxHitPoints << ")" << std::endl;
}

unsigned int	ScavTrap::getRangedDamage(void){
	return this->_rangedAttackDamagePoints;
}

unsigned int	ScavTrap::getMeleeDamage(void){
	return this->_meleeAttackDamagePoints;
}

unsigned int	ScavTrap::getArmorReduction(void){
	return this->_armorDamageReductionPoints;
}

std::string		ScavTrap::getName(void){
	return this->_name;
}

unsigned int	ScavTrap::getBigBangDamage(void){
	return this->_bigBangAttackDamagePoints;
}

unsigned int	ScavTrap::getSpecialKungFuKickDamage(void){
	return this->_specialKungFuKickAttackDamagePoints;
}

unsigned int	ScavTrap::getKickInBallsDamage(void){
	return this->_kickInBallsAttackDamagePoints;
}

unsigned int	ScavTrap::getSpitDamage(void){
	return this->_spitAttackDamagePoints;
}

unsigned int	ScavTrap::getHugBangDamage(void){
	return this->_hugAttackDamagePoints;
}

void	ScavTrap::challengeNewcomer(std::string const & target){
	std::cout << this->_name << " uses is random challenge function" << std::endl;

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
	std::cout <<"[challenge] : " <<	this->_name << " piss on " << target << "with his oil tank" << std::endl;
}

void	ScavTrap::specialKunkFuKickAttack(std::string const & target){
	std::cout <<"[challenge] : " <<	this->_name << " is playing Rock Paper Scissors with " << target << std::endl;
}

void	ScavTrap::kickInBallsAttack(std::string const & target){
	(void)target;
	std::cout <<"[challenge] : " <<	this->_name << " is moonwalking " << std::endl;
}

void	ScavTrap::spitAttack(std::string const & target){
	(void)target;
	std::cout <<"[challenge] : " <<	this->_name << " is juggling with some rocks" << std::endl;
}

void	ScavTrap::hugAttack(std::string const & target){
	(void)target;
	std::cout <<"[challenge] : " <<	this->_name << " is eating chilli sauce (but feels nothing because he is a robot)" << std::endl;
}

int		ScavTrap::counter = 0;
