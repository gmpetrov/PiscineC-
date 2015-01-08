/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 14:45:06 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/07 15:50:28 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void) : _rawBits(0), _nbBits(8){
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src) : _rawBits(0), _nbBits(8){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

int			Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

void		Fixed::setRawBits(int const raw){
	this->_rawBits = raw;
}

Fixed &		Fixed::operator=(Fixed const & rhs){
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs){
		this->setRawBits(rhs.getRawBits());
	}
	return *this;
}
