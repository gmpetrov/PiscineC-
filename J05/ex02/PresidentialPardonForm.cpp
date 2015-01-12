/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 23:07:25 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/12 23:57:10 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5){
	std::cout << "PresidentialPardonForm constructed" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm & src) : Form("PresidentialPardonForm", 25, 5){
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(void){
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs){
	(void) rhs;
	return *this;
}

void 		PresidentialPardonForm::execute(Bureaucrat const & executor){
	try{
		Form::execute(executor);
		std::cout << this->getName() << "'s' excute() function called" << std::endl;
		std::cout << executor.getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException e){
		std::cout << e.what() << std::endl;
	}
	catch(std::exception e){
		std::cout << "Form is not signed" << std::endl;
	}
	return ;
}
