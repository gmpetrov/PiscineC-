/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmp <gmp@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 13:22:50 by gmp               #+#    #+#             */
/*   Updated: 2015/01/12 17:51:24 by gmp              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void){

	Bureaucrat jean("Jean", 4);
	Form form("Achat Voiture", 3, 10);

	std::cout << form << std::endl;

	// jean.signForm(form);
	form.beSigned(jean);
	std::cout << form << std::endl;
	// Bureaucrat georges("Georges", 149);
	// georges--;
	// std::cout << georges << std::endl;
	// georges--;
	// std::cout << georges << std::endl;

	// std::cout << std::endl;

	// Bureaucrat jean("Jean", 2);
	// jean++;
	// std::cout << jean << std::endl;
	// jean++;
	// std::cout << jean << std::endl;

	return 0;
}