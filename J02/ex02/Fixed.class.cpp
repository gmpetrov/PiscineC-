/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 14:45:06 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/07 21:58:05 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void) : _rawBits(0), _nbBits(8){
	return;
}

Fixed::~Fixed(void){
	return ;
}

Fixed::Fixed(Fixed const & src) : _rawBits(0), _nbBits(8){
	*this = src;
	return ;
}

Fixed::Fixed(int const value) : _rawBits(value), _nbBits(8){
	this->_rawBits = value << this->_nbBits;
	return ;
}

Fixed::Fixed(float const value) : _rawBits(value), _nbBits(8){
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

bool	Fixed::operator>(Fixed const & rhs) const{
	return this->toFloat() > rhs.toFloat();
}

bool	Fixed::operator<(Fixed const & rhs) const{
	return this->toFloat() < rhs.toFloat();
}

bool	Fixed::operator>=(Fixed const & rhs) const{
	return this->toFloat() >= rhs.toFloat();
}

bool	Fixed::operator<=(Fixed const & rhs) const{
	return this->toFloat() <= rhs.toFloat();
}

bool	Fixed::operator==(Fixed const & rhs) const{
	return this->toFloat() == rhs.toFloat();
}

bool	Fixed::operator!=(Fixed const & rhs) const{
	return this->toFloat() != rhs.toFloat();
}

Fixed	Fixed::operator+(Fixed const & rhs) const{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(Fixed const & rhs) const{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(Fixed const & rhs) const{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const & rhs) const{
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed & Fixed::operator++(void){
	this->setRawBits(++(this->_rawBits));
	return *this;
}

Fixed  Fixed::operator++(int){
	Fixed old = *this;
	this->setRawBits(++(this->_rawBits));
	return old;
}

Fixed &		Fixed::max(Fixed a, Fixed b){
	if (a.toFloat() >= b.toFloat())
	{
		Fixed &z = a;
		return z;
	}
	Fixed &z = b;
	return z;
}

Fixed &		Fixed::min(Fixed c, Fixed d){
	if (c.toFloat() <= d.toFloat())
	{
		Fixed &z = c;
		return z;
	}
	Fixed &z = d;
	return z;
}

std::ostream &		operator<<(std::ostream & o, Fixed const & i){
	return o << i.toFloat();;
}
