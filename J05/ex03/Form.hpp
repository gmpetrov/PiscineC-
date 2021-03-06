/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 15:25:48 by gmp               #+#    #+#             */
/*   Updated: 2015/01/13 00:51:39 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Form{

	public:
		Form(std::string, int const, int const);
		Form(Form const & src, std::string, int const, int const);
		virtual ~Form(void) = 0;
		Form &operator=(Form const & rhs);
		std::string 	 	getName()const;
		bool 				getSigned() const;
		int 	 			getGradeToSign() const;
		int 	 			getGradeToExec() const;
		void 				beSigned(Bureaucrat bureaucrat);
		virtual void 		execute(Bureaucrat const & executor) const;
		std::string 		target;
	private:
		std::string const 	_name;
		int const 			_gradeToSign;
		int const			_gradeToExec;
		bool 				_signed;
};

std::ostream & 		operator<<(std::ostream & o, Form const & i);

#endif