/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 14:45:06 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/07 18:25:07 by gpetrov          ###   ########.fr       */
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

Fixed::Fixed(int const value) : _rawBits(value), _nbBits(8){
	this->_rawBits = value << this->_nbBits;
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(float const value) : _rawBits(value), _nbBits(8){
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(value * (pow(2, this->_nbBits)));
	return ;
}

int			Fixed::getRawBits(void) const{
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

int		Fixed::toInt(void) const{
	return this->_rawBits >> this->_nbBits;
}

float	Fixed::toFloat(void) const{
	return this->getRawBits() * pow(2, -this->_nbBits);
}

std::ostream &		operator<<(std::ostream & o, Fixed const & i){
	return o << i.toFloat();;
}
