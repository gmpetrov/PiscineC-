/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 15:30:54 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/14 17:25:46 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>

template <typename T>

class Array{

	public:
		Array<T>() : _size(0){ this->_array = NULL; };
		Array<T>(unsigned int n) : _size(n){
			this->_array = new T[n];
		}
		Array<T>(Array<T> const & src){
			*this = src;
		}
		~Array<T>(){}
		Array<T> & 	operator=(Array<T> const rhs){ 
			this->_array = new T[rhs.size()];
			this->_size = rhs.size();
			for (unsigned int i = 0; i < rhs.size(); i++)
				this->_array[i] = rhs[i];
		 	return *this;
		}
		T 	size() const{return this->_size;}
		T & operator[](unsigned int i) const{
			if (i > (this->_size - 1))
				throw std::exception();
			return this->_array[i];
		}
	private:
		unsigned int 	_size;
		T 				*_array;

};

#endif