/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 13:22:50 by gmp               #+#    #+#             */
/*   Updated: 2015/01/12 21:11:55 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){
	std::cout << "Bureaucrat " << name << " with grade " << grade << " constructed" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src, std::string name, int grade) : _name(name), _grade(grade){
    try{
		if (this->getGrade() + 1 > 150){
			throw Bureaucrat::GradeTooLowException();
		}
		else
			this->_grade++;
	}
	catch (Bureaucrat::GradeTooLowException e){
		std::cout << e.what() << std::endl;
	}

	*this = src;
}

Bureaucrat::~Bureaucrat(void){

}

Bureaucrat & 	Bureaucrat::operator=(Bureaucrat const & rhs){
	(void)rhs;
	return *this;
}

int 			Bureaucrat::getGrade(void) const{
	return this->_grade;
}

std::string  	Bureaucrat::getName(void) const{
	return this->_name;
}

Bureaucrat & 	Bureaucrat::operator++(int){
	std::cout << "Operator++ called on " << this->_name << std::endl;
	try{
		if (this->getGrade() - 1 < 1){
			throw Bureaucrat::GradeTooHighException();
		}
		else
			this->_grade--;
	}
	catch (Bureaucrat::GradeTooHighException e){
		std::cout << e.what() << std::endl;
	}
	return *this;
}

Bureaucrat & 	Bureaucrat::operator--(int){
	std::cout << "Operator-- called on " << this->_name << std::endl;
	try{
		if (this->getGrade() + 1 > 150){
			throw Bureaucrat::GradeTooLowException();
		}
		else
			this->_grade++;
	}
	catch (Bureaucrat::GradeTooLowException e){
		std::cout << e.what() << std::endl;
	}
	return *this;
}

std::ostream & 		operator<<(std::ostream & o, Bureaucrat const & i){
	return o <<  i.getName() << ", bureaucrat grade " << i.getGrade();
}

const char 		*Bureaucrat::GradeTooHighException::what() const throw(){
	return ("[EXCEPTION] : 1 is the maximum grade");
}

const char 		*Bureaucrat::GradeTooLowException::what() const throw(){
	return ("[EXCEPTION] : 150 is the minimum grade");
}

Bureaucrat::GradeTooHighException::GradeTooHighException() throw(){
	return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src) throw(){
	*this = src;
	return ;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw(){
	return ;
}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const & rhs) throw(){
	(void)rhs;
	return *this;
}

Bureaucrat::GradeTooLowException::GradeTooLowException() throw(){
	return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src) throw(){
	*this = src;
	return ;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw(){
	return ;
}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const & rhs) throw(){
	(void)rhs;
	return *this;
}