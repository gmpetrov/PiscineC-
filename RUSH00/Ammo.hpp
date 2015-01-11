/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ammo.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 15:55:02 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/11 16:26:08 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMMO_H
# define AMMO_H

# include <iostream>
# include <string>

class Ammo{
	public:
		Ammo(void);
		Ammo(Ammo const & stc);
		~Ammo(void);
		Ammo &		operator=(Ammo const & rhs);
		std::string		getType();
		virtual int		getNb() = 0;
	protected:
		std::string		_type;

};

#endif