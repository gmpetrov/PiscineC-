/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 14:24:02 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/15 21:12:35 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template<typename T>
MutantStack<T>::MutantStack(){
	// std::cout << "test" << std::endl;
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const & src) : std::stack<T>(src){
 	*this = src;
}

template<typename T>
MutantStack<T>::~MutantStack<T>(){}

template<typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack<T> const & rhs){
	std::stack<T>::operator=(rhs);
	return *this;
}

template<typename T>
T				MutantStack<T>::iterator::operator*(void){
	return (*element);
}

template <typename T>
typename MutantStack<T>::iterator & MutantStack<T>::iterator::operator++(void){
	++(this->element);
	return *this;
}

template <typename T>
typename MutantStack<T>::iterator  MutantStack<T>::iterator::operator++(int){
	
	MutantStack<T>::iterator save = *this;
	++(this->element);
	return save;
}

template <typename T>
typename MutantStack<T>::iterator & MutantStack<T>::iterator::operator--(void){
	--(this->element);
	return *this;
}

template <typename T>
typename MutantStack<T>::iterator  MutantStack<T>::iterator::operator--(int){
	
	MutantStack<T>::iterator save = *this;
	--(this->element);
	return save;
}

template <typename T>
bool MutantStack<T>::iterator::operator!=(MutantStack<T>::iterator const & rhs)const{
	return this->element != rhs.element;
}

template <typename T>
bool MutantStack<T>::iterator::operator==(MutantStack<T>::iterator const & rhs)const{
	return this->element == rhs.element;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(){
	T	*p = &(this->top());
	for(int i = 0; i < (this->size() - 1); i++){
		p--;
	}
	iterator it;
	it.element = p;
	return it;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(){
	T	*p = &(this->top()) + 1;
	iterator it;
	it.element = p;
	return it;
}

template <typename T>
MutantStack<T>::iterator::iterator(){

}

template <typename T>
MutantStack<T>::iterator::iterator(MutantStack<T>::iterator const & src){
	*this = src;
}

template <typename T>
MutantStack<T>::iterator::~iterator(){

}
