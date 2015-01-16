/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 21:08:57 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/08 21:27:44 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name, unsigned int hit, unsigned int maxHit, unsigned int en, unsigned int maxEn, unsigned int lvl, unsigned int mel, unsigned int range, unsigned int armor, unsigned int big, unsigned int spe, unsigned int kick, unsigned int spit, unsigned int hug) : _name(name){

	this->_hitPoints = hit;
	this->_maxHitPoints = maxHit;
	this->_energyPoints = en;
	this->_maxEnergyPoints = maxEn;
	this->_level = lvl;
	this->_meleeAttackDamagePoints = mel;
	this->_rangedAttackDamagePoints = range;
	this->_armorDamageReductionPoints = armor;
	this->_bigBangAttackDamagePoints = big;
	this->_specialKungFuKickAttackDamagePoints = spe;
	this->_kickInBallsAttackDamagePoints = kick;
	this->_spitAttackDamagePoints = spit;
	this->_hugAttackDamagePoints = hug;
	std::cout << "(MOTHER)  Designation: " << name << ", Hyperion Robot" << std::endl;
	return;
}

ClapTrap::~ClapTrap(void){
	std::cout << "(MOTHER) ("+this->_name+")" + " I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src, std::string name, unsigned int hit, unsigned int maxHit, unsigned int en, unsigned int maxEn, unsigned int lvl, unsigned int mel, unsigned int range, unsigned int armor, unsigned int big, unsigned int spe, unsigned int kick, unsigned int spit, unsigned int hug) : _name(name){

	this->_hitPoints = hit;
	this->_maxHitPoints = maxHit;
	this->_energyPoints = en;
	this->_maxEnergyPoints = maxEn;
	this->_level = lvl;
	this->_meleeAttackDamagePoints = mel;
	this->_rangedAttackDamagePoints = range;
	this->_armorDamageReductionPoints = armor;
	this->_bigBangAttackDamagePoints = big;
	this->_specialKungFuKickAttackDamagePoints = spe;
	this->_kickInBallsAttackDamagePoints = kick;
	this->_spitAttackDamagePoints = spit;
	this->_hugAttackDamagePoints = hug;
	*this = src;
	std::cout << "(MOTHER)  Designation: " << name << ", Hyperion Robot" << std::endl;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs){
	(void)rhs;
	return *this;
}

void	ClapTrap::rangedAttack(std::string const & target){
	std::cout << this->_name+" attacks "+target+" at range, causing " << this->_rangedAttackDamagePoints << " points of damage !" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target){
	std::cout << this->_name+" attacks "+target+" at melee, causing " << this->_meleeAttackDamagePoints << " points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (this->_hitPoints == 0){
		std::cout << "(" + this->_name +") LEAVE ME ALONE, I'M ALREADY DEAD !!" << std::endl;
		return ;
	}
	unsigned int damage = ((int)amount - (int)this->_armorDamageReductionPoints < 0 ? 0 : amount - this->_armorDamageReductionPoints);
	this->_hitPoints = ((int)this->_hitPoints - (int)damage < 0 ? 0 : this->_hitPoints - damage);
	std::cout << "(" + this->_name +")" + "Aiiie (-" << damage << " hp, " << this->_hitPoints << " left)" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
		if (this->_energyPoints < amount){
			std::cout << "(" + this->_name + ") FUCK can't heal myself, not enough energy points ... (" << this->_energyPoints << "/" << this->_maxEnergyPoints <<" energy points)" << std::endl;
			return ;
		}
		this->_energyPoints -= amount;
		this->_hitPoints = (this->_hitPoints + amount > this->_maxHitPoints ? this->_maxHitPoints : this->_hitPoints + amount);
		std::cout << this->_name << " is healing, +"<<amount<<"HP (" << this->_hitPoints << "/" << this->_maxHitPoints << ")" << std::endl;
}

unsigned int	ClapTrap::getRangedDamage(void){
	return this->_rangedAttackDamagePoints;
}

unsigned int	ClapTrap::getMeleeDamage(void){
	return this->_meleeAttackDamagePoints;
}

unsigned int	ClapTrap::getArmorReduction(void){
	return this->_armorDamageReductionPoints;
}

std::string		ClapTrap::getName(void){
	return this->_name;
}

unsigned int	ClapTrap::getBigBangDamage(void){
	return this->_bigBangAttackDamagePoints;
}

unsigned int	ClapTrap::getSpecialKungFuKickDamage(void){
	return this->_specialKungFuKickAttackDamagePoints;
}

unsigned int	ClapTrap::getKickInBallsDamage(void){
	return this->_kickInBallsAttackDamagePoints;
}

unsigned int	ClapTrap::getSpitDamage(void){
	return this->_spitAttackDamagePoints;
}

unsigned int	ClapTrap::getHugBangDamage(void){
	return this->_hugAttackDamagePoints;
}

int		ClapTrap::counter = 0;
