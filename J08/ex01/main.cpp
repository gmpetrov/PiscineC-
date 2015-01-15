/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 12:51:16 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/15 14:22:20 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int RandomNumber () { return (std::rand() % 10000); }

int		main(){
	try{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);


		Span sp2 = sp;

		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl << std::endl;

		std::srand(time(NULL));
		std::vector<int> gen(10000);
		std::generate(gen.begin(), gen.end(), RandomNumber);
		Span test = Span(10000);
		test.addRange(gen);
		// test.displayContainer();
		std::cout << test.shortestSpan() << std::endl;
		std::cout << test.longestSpan() << std::endl;
	}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}