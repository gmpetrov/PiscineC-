/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 00:28:05 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/13 01:14:58 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void){
	std::cout << "Intern constructed" << std::endl;
	return ;
}

Intern::Intern(Intern & src){
	*this = src;
}

Intern::~Intern(void){
	return ;
}

Intern & Intern::operator=(Intern const & rhs){
	(void) rhs;
	return *this;
}

Form 	*Intern::makeForm(std::string type, std::string name){
	std::string robot = "Robotomy";
	std::string chelou = "Shrubbery";
	std::string pres = "Presidential";
	std::size_t found;
	type.find(robot);
	if ((found = type.find(robot)) != std::string::npos){
		Form *robo = new RobotomyRequestForm();
		robo->target = name;
		return robo;
	}
	else if ((found = type.find(chelou)) != std::string::npos){
		Form *chelo = new ShrubberyCreationForm();
		chelo->target = name;
		return chelo;
	}
	else if ((found = type.find(pres)) != std::string::npos){
		Form *pre = new PresidentialPardonForm();
		pre->target = name;
		return pre;
	}
	else{
		std::cout << "Can't find a matching form for " << type << std::endl;
		return NULL;
	}
}