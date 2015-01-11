/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 22:38:31 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/11 16:25:08 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string>
# include "Ammo.hpp"

class Weapon{
	public:
		Weapon(std::string name, Ammo *ammo);
		Weapon(Weapon const & stc, std::string name, Ammo *ammo);
		~Weapon(void);
		Weapon &		operator=(Weapon const & rhs);
		std::string		getName();
		Ammo			*getAmmo();

	protected:
		std::string		_name;
		// int				_ammo;
		Ammo 			*_ammo;


};

#endif