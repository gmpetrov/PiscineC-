/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 13:22:50 by gmp               #+#    #+#             */
/*   Updated: 2015/01/12 22:47:23 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void){

	Form form("Achat Voiture", 3, 10);
	std::cout << form << std::endl;
	try{
		Bureaucrat jean("Jean", 42);

		std::cout << "Going to call beSigned() without signForm()" << std::endl;
		form.beSigned(jean);
		std::cout << "Now Calling signForm()" << std::endl;
		jean.signForm(form);		
	}
	catch(Bureaucrat::GradeTooLowException e){
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException e){
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat boss("Boss", 1);
		std::cout << "Now the boss is going to handle the case" << std::endl;
		boss.signForm(form);
		std::cout << form << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException e){
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}