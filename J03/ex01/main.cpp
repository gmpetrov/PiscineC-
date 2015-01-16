/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 11:57:01 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/08 20:00:39 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{

	unsigned int	damage;

	std::cout << "------------- Test for FragTrap class --------------" << std::endl;
	FragTrap jean("Jean");
	std::cout << std::endl;
	FragTrap jacques("Jacques");
	std::cout << std::endl;

	jean.meleeAttack(jacques.getName());
	jacques.takeDamage(jean.getMeleeDamage());
	jacques.rangedAttack(jean.getName());
	jean.takeDamage(jacques.getRangedDamage());
	jean.beRepaired(20);
	jean.meleeAttack(jacques.getName());
	jacques.takeDamage(jean.getMeleeDamage());
	jean.meleeAttack(jacques.getName());
	jacques.takeDamage(jean.getMeleeDamage());
	jean.meleeAttack(jacques.getName());
	jacques.takeDamage(jean.getMeleeDamage());
	damage = jacques.vaulthunter_dot_exe(jean.getName());
	jean.takeDamage(damage);
	jacques.beRepaired(50);
	damage = jean.vaulthunter_dot_exe(jacques.getName());
	jacques.takeDamage(damage);
	damage = jean.vaulthunter_dot_exe(jacques.getName());
	jacques.takeDamage(damage);
	damage = jean.vaulthunter_dot_exe(jacques.getName());
	jacques.takeDamage(damage);
	damage = jean.vaulthunter_dot_exe(jacques.getName());
	jacques.takeDamage(damage);
	jean.meleeAttack(jacques.getName());
	jacques.takeDamage(jean.getMeleeDamage());
	jean.meleeAttack(jacques.getName());
	jacques.takeDamage(jean.getMeleeDamage());

	std::cout << "--------------END TEST FOR FRAGTRAP ----------------" << std::endl;

	std::cout << "------------- Test for ScavTrap class --------------" << std::endl;

	ScavTrap lameJean("Lame Jean");
	std::cout << std::endl;
	ScavTrap lameJacques("Lame Jacques");
	std::cout << std::endl;

	lameJean.meleeAttack(lameJacques.getName());
	lameJacques.takeDamage(lameJean.getMeleeDamage());
	lameJacques.rangedAttack(lameJean.getName());
	lameJean.takeDamage(lameJacques.getRangedDamage());
	lameJean.beRepaired(20);
	lameJean.meleeAttack(lameJacques.getName());
	lameJacques.takeDamage(lameJean.getMeleeDamage());
	lameJean.meleeAttack(lameJacques.getName());
	lameJacques.takeDamage(lameJean.getMeleeDamage());
	lameJean.meleeAttack(lameJacques.getName());
	lameJacques.takeDamage(lameJean.getMeleeDamage());
	lameJacques.challengeNewcomer(lameJean.getName());
	lameJacques.beRepaired(50);
	lameJean.challengeNewcomer(lameJacques.getName());
	lameJean.challengeNewcomer(lameJacques.getName());
	lameJean.challengeNewcomer(lameJacques.getName());
	lameJean.challengeNewcomer(lameJacques.getName());
	lameJean.meleeAttack(lameJacques.getName());
	lameJacques.takeDamage(lameJean.getMeleeDamage());
	lameJean.meleeAttack(lameJacques.getName());
	lameJacques.takeDamage(lameJean.getMeleeDamage());


	std::cout << "--------------END TEST FOR SCAVTRAP ----------------" << std::endl;

	return 0;
}
