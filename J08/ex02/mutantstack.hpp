/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 14:24:02 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/15 21:12:55 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_H
# define MUTANT_STACK_H

# include <map>
# include <vector>
# include <list> 
# include <iostream>
# include <algorithm>
# include <stack>
# include <deque>

template <typename T> 
class MutantStack : public std::stack<T>{
	public:
		MutantStack<T>();
		template <typename U>
		MutantStack<T>(U ctnr) : std::stack<T>(ctnr){};
		MutantStack<T>(MutantStack<T> const & src);
		~MutantStack<T>();
		MutantStack<T> & 	operator=(MutantStack<T> const & rhs);
		class iterator : public std::iterator<std::input_iterator_tag, int>{
			public:
				iterator();
				iterator(iterator const & src);
				~iterator();
				iterator & 	operator=(iterator const & rhs);
				T		operator*(void);
				T 		*element;
				iterator & operator++(void);
				iterator  operator++(int);
				iterator & operator--(void);
				iterator  operator--(int);
				bool 	  operator!=(iterator const & rhs) const;
				bool 	  operator==(iterator const & rhs) const;

		};
		iterator begin();
		iterator end();
};

#include "mutantstack.cpp"

#endif