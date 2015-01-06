/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 20:04:07 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/06 21:50:57 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string>

class Weapon{
	public:
		Weapon(std::string type);
		~Weapon(void);
		std::string const	&getType(void);
		void				setType(std::string type);
	private:
		std::string			_type;
};

#endif
