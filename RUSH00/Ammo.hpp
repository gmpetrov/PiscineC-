/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ammo.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 15:55:02 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/11 21:02:24 by gpetrov          ###   ########.fr       */
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
		virtual ~Ammo(void);
		Ammo &		operator=(Ammo const & rhs);
		std::string		getType();
		virtual int		getNb() = 0;
		virtual void	setNb(int) = 0;
		virtual int 	getNbInstance() = 0;
		virtual void	setNbInstance(int) = 0;
		int				getX();
		int				getY();
		void			setX(int);
		void			setY(int);
		bool 			dead;
	protected:
		std::string		_type;
		int				_x;
		int				_y;;

};

#endif