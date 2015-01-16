/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 11:56:38 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/08 20:20:13 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
# include <string>
# include <stdlib.h>
# include <time.h>

class ScavTrap{

	public:
		ScavTrap(std::string);
		~ScavTrap(void);
		ScavTrap(ScavTrap const & src, std::string);
		ScavTrap &	operator=(ScavTrap const & rhs);

		unsigned int	getMeleeDamage(void);
		unsigned int	getRangedDamage(void);
		unsigned int	getArmorReduction(void);
		unsigned int	getBigBangDamage(void);
		unsigned int	getSpecialKungFuKickDamage(void);
		unsigned int	getKickInBallsDamage(void);
		unsigned int	getSpitDamage(void);
		unsigned int	getHugBangDamage(void);
		std::string		getName(void);

		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			challengeNewcomer(std::string const & target);

		void			bigBangAttack(std::string const & target);
		void			specialKunkFuKickAttack(std::string const & target);
		void			kickInBallsAttack(std::string const & target);
		void			spitAttack(std::string const & target);
		void			hugAttack(std::string const & target);
		static int		counter;
	private:
		unsigned int	_hitPoints;
		unsigned int	_maxHitPoints;
		unsigned int	_energyPoints;
		unsigned int	_maxEnergyPoints;
		unsigned int	_level;
		std::string		_name;
		unsigned int	_meleeAttackDamagePoints;
		unsigned int	_rangedAttackDamagePoints;
		unsigned int	_armorDamageReductionPoints;
		unsigned int	_bigBangAttackDamagePoints;
		unsigned int	_specialKungFuKickAttackDamagePoints;
		unsigned int	_kickInBallsAttackDamagePoints;
		unsigned int	_spitAttackDamagePoints;
		unsigned int	_hugAttackDamagePoints;

		
};
#endif
