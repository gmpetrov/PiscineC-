/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 13:22:50 by gmp               #+#    #+#             */
/*   Updated: 2015/01/13 00:25:42 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void){
	ShrubberyCreationForm formS;
	RobotomyRequestForm	  formR;
	PresidentialPardonForm formP;
	try{
		Bureaucrat jean("Jean", 42);
		Bureaucrat boss("The Boss", 1);

		jean.signForm(formS);
		formS.execute(jean);
		std::cout << formS << std::endl;
		for (int i = 0; i < 10; i++)
			formR.execute(jean);
		jean.signForm(formR);
		std::cout  << formR << std::endl;
		for (int i = 0; i < 10; i++)
			formR.execute(jean);
		for (int i = 0; i < 10; i++)
			formR.execute(boss);
		jean.signForm(formP);
		boss.signForm(formP);
		boss.executeForm(formP);
	}
	catch(Bureaucrat::GradeTooLowException e){
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}