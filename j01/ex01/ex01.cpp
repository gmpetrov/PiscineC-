/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 14:24:22 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/06 14:32:13 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	memoryLeak()
{
	std::string* panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}

