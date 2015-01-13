/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 21:33:25 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/12 23:57:00 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137){
	std::cout << "ShrubberyCreationForm constructed" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm & src) : Form("ShrubberyCreationForm", 145, 137){
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs){
	(void) rhs;
	return *this;
}

void 		ShrubberyCreationForm::execute(Bureaucrat const & executor){
	try{
		Form::execute(executor);
		std::cout << this->getName() << "'s' excute() function called" << std::endl;
		std::string name = executor.getName();
		name += "_shrubbery";
		std::ofstream	out(name.c_str());
		std::string tree = "               ,@@@@@@@,\n       ,,,.   ,@@@@@@/@@,  .oo8888o.\n    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n   `&%\\ ` /%&'    |.|        \\ '|8'\n       |o|        | |         | |\n       |.|        | |         | |\njgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_";
		out << tree << std::endl;
		out.close();
	}
	catch(Bureaucrat::GradeTooLowException e){
		std::cout << e.what() << std::endl;
	}
	catch(std::exception e){
		std::cout << "Form is not signed" << std::endl;
	}

	return ;
}
