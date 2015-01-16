/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 19:55:40 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/08 21:40:26 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>
# include <stdlib.h>
# include <string.h>

class ClapTrap{

	public:
		ClapTrap(std::string name, unsigned int hit, unsigned int maxHit, unsigned int en, unsigned int maxEn, unsigned int lvl, unsigned int mel, unsigned int range, unsigned int armor, unsigned int big, unsigned int spe, unsigned int kick, unsigned int spit, unsigned int hug);
		~ClapTrap(void);
		ClapTrap(ClapTrap const & src, std::string name, unsigned int hit, unsigned int maxHit, unsigned int en, unsigned int maxEn, unsigned int lvl, unsigned int mel, unsigned int range, unsigned int armor, unsigned int big, unsigned int spe, unsigned int kick, unsigned int spit, unsigned int hug);
		ClapTrap &	operator=(ClapTrap const & rhs);
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
		unsigned int	challengeNewcomer(std::string const & target);

		static int		counter;
	protected:
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
