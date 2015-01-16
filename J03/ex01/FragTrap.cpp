/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 11:56:41 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/08 21:14:32 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _name(name), _meleeAttackDamagePoints(30), _rangedAttackDamagePoints(20), _armorDamageReductionPoints(5), _bigBangAttackDamagePoints(20), _specialKungFuKickAttackDamagePoints(20), _kickInBallsAttackDamagePoints(30), _spitAttackDamagePoints(5), _hugAttackDamagePoints(0){
	std::cout << "Booting sequence complete. Hello! I am your new steward bot. Designation: " << name << ", Hyperion Robot, Class C. Please adjust factory settings to meet your needs before deployment." << std::endl;
	return;
}

FragTrap::~FragTrap(void){
	std::cout << "("+this->_name+")" + " I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & src, std::string name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _name(name), _meleeAttackDamagePoints(30), _rangedAttackDamagePoints(20), _armorDamageReductionPoints(5), _bigBangAttackDamagePoints(20), _specialKungFuKickAttackDamagePoints(20), _kickInBallsAttackDamagePoints(30), _spitAttackDamagePoints(5), _hugAttackDamagePoints(0){
	std::cout << "Booting sequence complete. Hello! I am your new steward bot. Designation: " << name << ", Hyperion Robot, Class C. Please adjust factory settings to meet your needs before deployment." << std::endl;
	*this = src;
}

FragTrap &	FragTrap::operator=(FragTrap const & rhs){
	(void)rhs;
	return *this;
}

void	FragTrap::rangedAttack(std::string const & target){
	std::cout << "FR4G-TP "+this->_name+" attacks "+target+" at range, causing " << this->_rangedAttackDamagePoints << " points of damage !" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target){
	std::cout << "FR4G-TP "+this->_name+" attacks "+target+" at melee, causing " << this->_meleeAttackDamagePoints << " points of damage !" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount){
	if (this->_hitPoints == 0){
		std::cout << "(" + this->_name +") LEAVE ME ALONE, I'M ALREADY DEAD !!" << std::endl;
		return ;
	}
	unsigned int damage = ((int)amount - (int)this->_armorDamageReductionPoints < 0 ? 0 : amount - this->_armorDamageReductionPoints);
	this->_hitPoints = ((int)this->_hitPoints - (int)damage < 0 ? 0 : this->_hitPoints - damage);
	std::cout << "(" + this->_name +")" + "Aiiie (-" << damage << " hp, " << this->_hitPoints << " left)" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount){
		if (this->_energyPoints < amount){
			std::cout << "(" + this->_name + ") FUCK can't heal myself, not enough energy points ... (" << this->_energyPoints << "/" << this->_maxEnergyPoints <<" energy points)" << std::endl;
			return ;
		}
		this->_energyPoints -= amount;
		this->_hitPoints = (this->_hitPoints + amount > this->_maxHitPoints ? this->_maxHitPoints : this->_hitPoints + amount);
		std::cout << this->_name << " is healing, +"<<amount<<"HP (" << this->_hitPoints << "/" << this->_maxHitPoints << ")" << std::endl;
}

unsigned int	FragTrap::getRangedDamage(void){
	return this->_rangedAttackDamagePoints;
}

unsigned int	FragTrap::getMeleeDamage(void){
	return this->_meleeAttackDamagePoints;
}

unsigned int	FragTrap::getArmorReduction(void){
	return this->_armorDamageReductionPoints;
}

std::string		FragTrap::getName(void){
	return this->_name;
}

unsigned int	FragTrap::getBigBangDamage(void){
	return this->_bigBangAttackDamagePoints;
}

unsigned int	FragTrap::getSpecialKungFuKickDamage(void){
	return this->_specialKungFuKickAttackDamagePoints;
}

unsigned int	FragTrap::getKickInBallsDamage(void){
	return this->_kickInBallsAttackDamagePoints;
}

unsigned int	FragTrap::getSpitDamage(void){
	return this->_spitAttackDamagePoints;
}

unsigned int	FragTrap::getHugBangDamage(void){
	return this->_hugAttackDamagePoints;
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
