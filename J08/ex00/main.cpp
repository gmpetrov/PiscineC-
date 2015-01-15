/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 12:17:40 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/15 12:49:33 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int		main(void)
{
	std::vector<int> v;

	std::cout << "Vector container created" << std::endl;

	std::cout << "push_back() some values in the container ..." << std::endl;
	v.push_back(32);
	v.push_back(42);
	v.push_back(89);
	v.push_back(2);
	v.push_back(55);

	try{
		std::cout << "Trying to find value 89 in the container" << std::endl;
		easyfind(v, 89);		
	}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}	

	std::list<int> 	 l;
	std::cout << "List container created" << std::endl;
	std::cout << "push_back() some values in the container ..." << std::endl;
	l.push_back(32);
	l.push_back(42);
	l.push_back(89);
	l.push_back(2);
	l.push_back(55);

	try{
		std::cout << "Trying to find value 42 in the container" << std::endl;
		easyfind(l, 42);
		std::cout << "Trying to find value 4242 that is not in the container" << std::endl;
		easyfind(l, 4242);
	}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}