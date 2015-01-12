/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmp <gmp@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 13:22:50 by gmp               #+#    #+#             */
/*   Updated: 2015/01/12 15:19:16 by gmp              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void){
	Bureaucrat georges("Georges", 149);
	georges--;
	std::cout << georges << std::endl;
	georges--;
	std::cout << georges << std::endl;

	std::cout << std::endl;

	Bureaucrat jean("Jean", 2);
	jean++;
	std::cout << jean << std::endl;
	jean++;
	std::cout << jean << std::endl;

	return 0;
}