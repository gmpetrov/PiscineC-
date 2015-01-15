/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 12:51:16 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/15 21:35:16 by gpetrov          ###   ########.fr       */
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
	int tmp;
	tmp = v[1] - v[0];
	for(unsigned int i = 0; i < v.size(); i++){
		if ((i + 1) < v.size() && (v[i + 1] - v[i] < tmp)){
			tmp = v[i + 1] - v[i];
		}
	}
	return abs(tmp);
}

int 	Span::longestSpan(){
	if (this->_container.size() < 2)
		throw std::exception();
	std::vector<int> v = this->_container;
	sort(v.begin(), v.end());
	int a = abs(*(v.begin()));
	int b = abs(*(v.end() - 1));
	return abs(b - a);
}

void 	Span::addRange(std::vector<int> v){
	this->_container.insert(this->_container.end(), v.begin(), v.end());
}

void 	Span::displayContainer(){
	for_each(this->_container.begin(), this->_container.end(), displayInt);
}