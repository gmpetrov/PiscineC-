/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 22:38:31 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/11 00:26:49 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string>

class Weapon{
	public:
		Weapon(std::string name, int ammo);
		Weapon(Weapon const & stc, std::string name, int ammo);
		~Weapon(void);
		Weapon &		operator=(Weapon const & rhs);
		std::string		getName();
		int				getAmmo();
	protected:
		std::string		_name;
		int				_ammo;


};

#endif