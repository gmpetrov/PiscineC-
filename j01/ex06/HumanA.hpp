/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 20:06:12 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/06 21:51:52 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA{
	public:
		HumanA(std::string name, Weapon  &weapon);
		~HumanA(void);
		void	attack(void);
	private:
		std::string		_name;
		Weapon			&_weapon;

};

#endif
