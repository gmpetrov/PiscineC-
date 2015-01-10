/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 22:34:48 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/10 23:22:51 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_H
# define PLAYER_H

# include <iostream>
# include <string>
# include "Ship.hpp"

class Player : public Ship{
	public:
		Player(void);
		Player(Player const & stc);
		~Player(void);
		Player &		operator=(Player const & rhs);
		virtual void 	attack();
	protected:

};

#endif