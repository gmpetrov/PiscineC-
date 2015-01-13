/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 13:22:50 by gmp               #+#    #+#             */
/*   Updated: 2015/01/13 01:19:35 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main(void){
	Intern intern;
	Form   *ran;

	if ((ran = intern.makeForm("Presidential", "ZouLou")) != NULL){
		std::cout << *ran << std::endl;
		std::cout << "target : " << ran->target << std::endl;
	}
	if ((ran = intern.makeForm("Robotomy", "BouLou")) != NULL){
		std::cout << *ran << std::endl;
		std::cout << "target : " << ran->target << std::endl;
	}
	if ((ran = intern.makeForm("Shrubbery", "KouLou")) != NULL){
		std::cout << *ran << std::endl;
		std::cout << "target : " << ran->target << std::endl;
	}
	if ((ran = intern.makeForm("ZBRA", "KouLou")) != NULL){
		std::cout << *ran << std::endl;
		std::cout << "target : " << ran->target << std::endl;
	}
	return 0;
}