/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AmmoPlayer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 16:09:51 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/11 16:16:15 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMMO_PLAYER_H
# define AMMO_PLAYER_H

# include <iostream>
# include <string>

# include "Ammo.hpp"

class AmmoPlayer : public Ammo{
	public:
		AmmoPlayer(void);
		AmmoPlayer(AmmoPlayer const & stc);
		~AmmoPlayer(void);
		AmmoPlayer &		operator=(AmmoPlayer const & rhs);
		int					getNb();
	protected:

	static int				nb;
};

#endif