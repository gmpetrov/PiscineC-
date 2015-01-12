/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmp <gmp@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 15:25:48 by gmp               #+#    #+#             */
/*   Updated: 2015/01/12 18:46:55 by gmp              ###   ########.fr       */
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
		~Form(void);
		Form &operator=(Form const & rhs);
		std::string 	 	getName()const;
		bool 				getSigned() const;
		int 	 			getGradeToSign() const;
		int 	 			getGradeToExec() const;
		void 				beSigned(Bureaucrat bureaucrat);
	private:
		std::string const 	_name;
		int const 			_gradeToSign;
		int const			_gradeToExec;
		bool 				_signed;
};

std::ostream & 		operator<<(std::ostream & o, Form const & i);

#endif