/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 13:36:39 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/06 14:20:28 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony *heapPony = new Pony("red", "male", "Heap");
	std::cout << "Hi my name is  " << heapPony->getName() << std::endl;
	std::cout << "Now deleting Heap" << std::endl;
	delete heapPony;
}

void	ponyOnTheStack(void)
{
	Pony stackPony = Pony("pink", "female", "Stack");
	std::cout << "Hi my name is  " << stackPony.getName() << std::endl;
}

int		main(void)
{

	std::cout << "calling ponyOnTheHeap()" << std::endl;
	ponyOnTheHeap();
	std::cout << "ponyOnTheHeap() terminated" << std::endl;
	std::cout << "calling ponyOnTheStack()" << std::endl;
	ponyOnTheStack();
	std::cout << "ponyOnTheStack() terminated" << std::endl;	
	return (0);
}
