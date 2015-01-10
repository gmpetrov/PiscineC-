/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Grid.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 20:33:59 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/10 21:57:10 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Grid.hpp"

Grid::Grid(void) : _top(0), _bottom(0){

}

Grid::Grid(Grid const & src){
	*this = src;
}

Grid::~Grid(void){

}

Grid &	Grid::operator=(Grid const & rhs){
	(void)rhs;
	return *this;
}


int 		Grid::getTop(){
	return this->_top;
}

int 		Grid::getBottom(){
	return this->_bottom;
}
