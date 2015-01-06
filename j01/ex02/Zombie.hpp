/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 14:37:42 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/06 14:50:10 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie{

	public:
		Zombie(std::string type, std::string name);
		~Zombie(void);
		std::string	getName(void);
		std::string	getType(void);
		void		announce(void);
	private:
		std::string	_type;
		std::string	_name;

};

#endif
