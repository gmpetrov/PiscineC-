/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 11:57:01 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/08 21:44:08 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

int		main(void)
{

	std::cout << "------------- Test for NINJATRAP class --------------" << std::endl;

	NinjaTrap lameJean("Ninja Jean");
	std::cout << std::endl;
	NinjaTrap lameJacques("Nina Jacques");
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
	lameJacques.beRepaired(50);
	lameJean.ninjaShoebox(lameJacques.getName());
	lameJacques.takeDamage(lameJean.getGodFart());
	lameJean.meleeAttack(lameJacques.getName());
	lameJacques.takeDamage(lameJean.getMeleeDamage());
	lameJean.meleeAttack(lameJacques.getName());
	lameJacques.takeDamage(lameJean.getMeleeDamage());


	std::cout << "--------------END TEST FOR NINJATRAP ----------------" << std::endl;

	return 0;
}
