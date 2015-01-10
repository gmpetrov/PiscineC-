/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 17:41:46 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/11 00:06:53 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WINDOW_H
# define WINDOW_H

# include <iostream>
# include <string>
# include <curses.h>
# include <signal.h>
# include <unistd.h>
# include <stdlib.h>
# include "Grid.hpp"
# include "Player.hpp"

# define WIDTH 	80
# define HEIGHT 24
# define WALL 	'#'
# define PLAYER '>'
# define BULLET	'-'
# define MARGIN	2

class Window{
	public:
		Window(void);
		Window(Window const & stc);
		~Window(void);
		Window &	operator=(Window const & rhs);
		int 		getWidth();
		int 		getHeigth();
		void		init(void);
		void		initData(void);
		void		generateMap(void);
		void		update(void);
		void		play(void);
		void		collision(void);
		Grid		*grid;
		Ship		*player;


	private:
		 int 		_width;
		 int 		_heigth;

};

#endif