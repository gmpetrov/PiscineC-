/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 11:57:01 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/08 17:57:47 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{

	unsigned int	damage;

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

	return 0;
}
