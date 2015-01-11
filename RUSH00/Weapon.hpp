/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 22:38:31 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/12 00:35:10 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string>
# include "Ammo.hpp"
# include "AmmoPlayer.hpp"

class Weapon{
	public:
		Weapon(std::string name);
		Weapon(Weapon const & stc, std::string name);
		~Weapon(void);
		Weapon &		operator=(Weapon const & rhs);
		std::string		getName();
		Ammo			*getAmmo();
		void			setAmmo(Ammo *ammo);

	protected:
		std::string		_name;
		// int				_ammo;
		Ammo 			*_ammo;


};

#endif