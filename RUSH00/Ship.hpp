/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 22:30:43 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/11 00:35:36 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHIP_H
# define SHIP_H

# include <iostream>
# include <string>

# include "Weapon.hpp"
# include "RayGun.hpp"


class Ship{
	public:
		Ship(int hp, int maxHp);
		Ship(Ship const & src, int hp, int maxHp);
		~Ship(void);
		Ship &		operator=(Ship const & rhs);
		int			getX();
		int			getY();
		void		setX(int);
		void		setY(int);
		int			getHP();
		int			getMaxHP();
		Weapon 		*getWeapon();
		void		setHP(int);
		virtual void attack() = 0;
	protected:
		int				_x;
		int				_y;
		int				_hp;
		int				_maxHp;
		std::string		name;
		Weapon			*weapon;

};

#endif