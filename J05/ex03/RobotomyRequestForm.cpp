/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 22:20:50 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/12 23:56:32 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45){
	std::cout << "RobotomyRequestForm constructed" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm & src) : Form("RobotomyRequestForm", 72, 45){
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void){
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs){
	(void) rhs;
	return *this;
}

void 		RobotomyRequestForm::execute(Bureaucrat const & executor){
	try{
		Form::execute(executor);
		std::cout << this->getName() << "'s' excute() function called" << std::endl << std::endl;
		std::cout << "drill drill drill ..." << std::endl;
		if (RobotomyRequestForm::half % 2)
			std::cout << executor.getName() << " has been robotomized successfully" << std::endl;
		else
			std::cout << "Failed to robotomized " << executor.getName() << std::endl;
		RobotomyRequestForm::half++;
	}
	catch(Bureaucrat::GradeTooLowException e){
		std::cout << e.what() << std::endl;
	}
	catch(std::exception e){
		std::cout << "Form is not signed" << std::endl;
	}
	return ;
}

int 		RobotomyRequestForm::half = 0;
