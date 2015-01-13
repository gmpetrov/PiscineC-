/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 15:25:48 by gmp               #+#    #+#             */
/*   Updated: 2015/01/13 00:21:47 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int const gradeToSign, int const gradeToExec) : _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec), _signed(false){
	try{
		if (gradeToSign < 1 || gradeToExec < 1){
			throw Bureaucrat::GradeTooHighException();
		}
		else if (gradeToSign > 150 || gradeToExec > 150){
			throw Bureaucrat::GradeTooLowException();
		}
	}
	catch (Bureaucrat::GradeTooHighException e){
		std::cout << e.what() << std::endl;
	}
	catch(std::exception e){
		std::cout << e.what() << std::endl;
	}
}

Form::Form(Form const & src, std::string name, int const gradeToSign, int const gradeToExec) : _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec), _signed(false){
	*this = src;
}

Form::~Form(void){

}

Form & 	Form::operator=(Form const & rhs){
	(void)rhs;
	return *this;
}

std::ostream & 		operator<<(std::ostream & o, Form const & i){
	return o << "Form " << i.getName() << ", grade to sign : " << i.getGradeToSign() << ", grade to execute : " << i.getGradeToExec() << ", signed : " << i.getSigned() ;
}

std::string		 	Form::getName()const{
	return this->_name;
}
bool 				Form::getSigned() const{
	return this->_signed;
}
int 	 			Form::getGradeToSign() const{
	return this->_gradeToSign;
}
int  				Form::getGradeToExec() const{
	return this->_gradeToExec;
}

void 			Bureaucrat::signForm(Form &form){
	try{
		form.beSigned(*this);
		if (form.getSigned() == false)
			throw Bureaucrat::GradeTooLowException();
		else
			std::cout << this->getName() << " signs " << form.getName() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException e){
		std::cout << this->getName() << "  cannot sign " << form.getName() << " because " << e.what() << std::endl;
		
	}
}

void 				Form::beSigned(Bureaucrat bureaucrat){
	std::cout << "beSigned function called" << std::endl;
	try{
		if (bureaucrat.getGrade() > this->getGradeToSign()){
			throw Bureaucrat::GradeTooLowException();
		}
		else{
			this->_signed = true;
		}
	}
	catch(Bureaucrat::GradeTooLowException e){
		std::cout << e.what() << std::endl;
	}
}

void 				Form::execute(Bureaucrat const & executor) const{

	if (this->_signed == false)
		throw std::exception();
	if (executor.getGrade() > this->_gradeToExec)
		throw Bureaucrat::GradeTooLowException();
}