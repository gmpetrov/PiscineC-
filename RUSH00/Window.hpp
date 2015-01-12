/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 17:41:46 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/12 00:52:16 by gpetrov          ###   ########.fr       */
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
# include "EnemyBasic.hpp"

# define WIDTH 	200
# define HEIGHT 24
# define PLAYER_X 5
# define WALL 	'#'
# define PLAYER '>'
# define BULLET	'-'
# define ENEMY_BASIC '('
# define MARGIN	2
# define NB_AMMO 10000

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
		void		moveAmmo(void);
		void		moveEnemy(void);
		void		generateEnemy(void);
		bool		bulletCollisionEnemy(int, int);
		void		enemyIA(Ship *enemy);
		void 		deleteEnemy(Ship *toDelete);
		Grid		*grid;
		Ship		*player;
		Ship 		*enemy;


	private:
		 int 		_width;
		 int 		_heigth;

	static int 		timer;
	static int 		score;
	static int 		nbEnemy;
};

#endif