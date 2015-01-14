/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 13:54:55 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/14 14:08:56 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename SWAP>

void 	swap(SWAP & a, SWAP & b){
	SWAP swap = a;
	a = b;
	b = swap;
}

template <typename MIN>

MIN 	min(MIN a, MIN b){
	return (b <= a ? b : a);
}


template <typename MAX>

MAX 	max(MAX a, MAX b){
	return (b >= a ? b : a);
}

int		main(void){
	
	int		a = 2;
	int		b = 5;

	std::cout << "a = " << a << " , b = " << b << std::endl;
	std::cout << "calling swap(a, b)" << std::endl;
	swap<int>(a, b);
	std::cout << "a = " << a << " , b = " << b << std::endl;

	std::cout << "Calling min(a, b)" << std::endl; 
	std::cout << min<int>(a, b) << std::endl;

	std::cout << "Calling max(a, b)" << std::endl;
	std::cout << max<int>(a, b) << std::endl << std::endl;


	/* Given main test */

	a = 2;
	b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;


	return 0;
}