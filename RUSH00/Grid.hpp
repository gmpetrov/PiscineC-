/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Grid.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 20:33:59 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/10 20:46:39 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRID_H
# define GRID_H

# include <iostream>
# include <string>

class Grid{
	public:
		Grid(void);
		Grid(Grid const & stc);
		~Grid(void);
		Grid &	operator=(Grid const & rhs);
		int 		getTop();
		int 		getBottom();
		int 		_top;
		int 		_bottom;

};

#endif