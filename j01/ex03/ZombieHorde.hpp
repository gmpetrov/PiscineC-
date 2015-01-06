/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 16:39:45 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/06 17:26:57 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_H
# define ZOMBIE_HORDE_H

# include <iostream>
# include <string>
# include "Zombie.hpp"

class ZombieHorde{
	public:
		ZombieHorde(int N);
		~ZombieHorde(void);
		void	announce(void);
	private:
		Zombie	*_horde;
		int		_n;
};

#endif
