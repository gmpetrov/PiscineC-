/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 19:11:23 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/11 21:17:51 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H

# include <iostream>
# include <string>

# include "Ship.hpp"

class Enemy : public Ship{
	public:
		Enemy(int, int);
		Enemy(Enemy const & src, int, int);
		~Enemy(void);
		Enemy &		operator=(Enemy const & rhs);
		virtual void 	attack();
	protected:
};

#endif