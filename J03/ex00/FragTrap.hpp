/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 11:56:38 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/08 20:24:31 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>
# include <string>
# include <stdlib.h>
# include <time.h>

class FragTrap{

	public:
		FragTrap(std::string);
		~FragTrap(void);
		FragTrap(FragTrap const & src, std::string);
		FragTrap &	operator=(FragTrap const & rhs);

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
		unsigned int	vaulthunter_dot_exe(std::string const & target);

		unsigned int	bigBangAttack(std::string const & target);
		unsigned int	specialKunkFuKickAttack(std::string const & target);
		unsigned int	kickInBallsAttack(std::string const & target);
		unsigned int	spitAttack(std::string const & target);
		unsigned int	hugAttack(std::string const & target);
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
