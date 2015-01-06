/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 20:04:43 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/06 22:02:58 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_H
# define HUMANB_H

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB{
	public:
		HumanB(std::string name);
		~HumanB(void);
		void			setWeapon(Weapon &weapon);
		void			attack(void);
	private:
		std::string		_name;
		Weapon			*_weapon;
};

#endif
