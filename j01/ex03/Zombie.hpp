/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 14:37:42 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/06 17:45:59 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie{

	public:
		Zombie(void);
		~Zombie(void);
		std::string	getName(void);
		std::string	getType(void);
		void		announce(void);
		std::string	randName(int i);
		static int	getCounter(void);
	private:
		std::string	_type;
		std::string	_name;
		static int	_counter;

};

#endif
