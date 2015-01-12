/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 13:22:50 by gmp               #+#    #+#             */
/*   Updated: 2015/01/12 22:44:01 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void){
	try{
		Bureaucrat georges("Georges", 1451);
		georges--;
		std::cout << georges << std::endl;
		georges--;
		std::cout << georges << std::endl;
		std::cout << std::endl;

	}
	catch(Bureaucrat::GradeTooLowException e){
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException e){
		std::cout << e.what() << std::endl;
	}

	try{
		Bureaucrat jean("Jean", 2);
		jean++;
		std::cout << jean << std::endl;
		jean++;
		std::cout << jean << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException e){
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException e){
		std::cout << e.what() << std::endl;
	}


	return 0;
}