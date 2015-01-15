/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 12:51:16 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/15 14:16:51 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n) : _n(n){

}

Span::Span(Span const & src, unsigned int n) : _n(n){
	*this = src;
}

Span::~Span(){}

Span & 	Span::operator=(Span const & rhs){
	this->_container = rhs._container;
	this->_n = rhs._n;
	return *this;
}

void	Span::addNumber(int nb){
	if (this->_n == this->_container.size())
		throw std::exception();
	this->_container.push_back(nb);
}

void	displayInt(int i){
	std::cout << i << std::endl;
}

int	  	Span::shortestSpan(){
	if (this->_container.size() < 2)
		throw std::exception();
	std::vector<int> v = this->_container;
	sort(v.begin(), v.end());
	int a = *(v.begin());
	int b = *(v.begin() + 1);
	return (b - a);
}

int 	Span::longestSpan(){
	if (this->_container.size() < 2)
		throw std::exception();
	std::vector<int> v = this->_container;
	sort(v.begin(), v.end());
	int a = *(v.begin());
	int b = *(v.end() - 1);
	return (b - a);
}

void 	Span::addRange(std::vector<int> v){
	this->_container.insert(this->_container.end(), v.begin(), v.end());
}

void 	Span::displayContainer(){
	for_each(this->_container.begin(), this->_container.end(), displayInt);
}