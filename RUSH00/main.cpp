/************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 14:50:35 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/10 16:28:04 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Window.hpp"

#define DELAY 30000

int		main(void){
	Window win;

	win.initData();
	win.init();
	win.update();
	// while (42){

	// }
	win.play();
	return 0;
}

