/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 14:24:02 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/15 21:13:02 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int		main(){

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(25);
	mstack.push(42);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	std::cout << *ite << " TEST" << std::endl;

	++it;
	--it;
	std::cout << *it << " (before loop)" << std::endl; 
	while (it != ite)
	{
		std::cout << *it << " (loop)" << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "=======================================" << std::endl;

	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);
	std::cout << lst.back() << std::endl;
	lst.pop_back();
	std::cout << lst.size() << std::endl;
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(25);
	lst.push_back(42);
	std::list<int>::iterator itLST = lst.begin();
	std::list<int>::iterator iteLST = lst.end();

	std::cout << *ite << " TEST 2" << std::endl;

	++itLST;
	--itLST;
	std::cout << *itLST << " (before loop)" << std::endl;
	while (itLST != iteLST)
	{
		std::cout << *itLST << " (loop)" << std::endl;
		++itLST;
	}
	return 0;
}