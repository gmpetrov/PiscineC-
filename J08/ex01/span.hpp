/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 12:51:16 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/15 14:17:31 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <map>
# include <vector>
# include <list> 
# include <iostream>
# include <algorithm>

class Span{
	public:
		Span(unsigned int);
		Span(Span const &, unsigned int);
		~Span();
		Span & 	operator=(Span const & rhs);
		void 	addNumber(int);
		void 	addRange(std::vector<int> v);
		int 	shortestSpan();
		int 	longestSpan();
		void 	displayContainer();
	private:
		unsigned int 		_n;
		std::vector<int>  	_container;
};

#endif