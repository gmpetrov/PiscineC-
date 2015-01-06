/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 14:55:42 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/06 15:15:37 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H

# include <string>
# include <iostream>
# include "Zombie.hpp"

class ZombieEvent{
	public:
		ZombieEvent(void);
		~ZombieEvent(void);
		void		setZombieType(std::string type);
		Zombie*		newZombie(std::string name);
	private:
		std::string	_type;
};

#endif
