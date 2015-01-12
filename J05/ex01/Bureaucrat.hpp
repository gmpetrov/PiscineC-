/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmp <gmp@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 13:22:50 by gmp               #+#    #+#             */
/*   Updated: 2015/01/12 19:01:04 by gmp              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <string>

class Form;

class Bureaucrat{

	public:
		Bureaucrat(std::string, int);
		Bureaucrat(Bureaucrat const & src, std::string, int);
		~Bureaucrat(void);
		Bureaucrat &operator=(Bureaucrat const & rhs);

		int					getGrade() const;
		std::string 		getName() const;
		Bureaucrat & 		operator++(int);
		Bureaucrat & 		operator--(int);
		void 				signForm(Form &);
		class GradeTooHighException : public std::exception {
			public:
				// GradeTooHighException();
				// GradeTooHighException(GradeTooHighException const & src);
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		Form 	*form;
	private:
		std::string const 	_name;
		int					_grade;
};

std::ostream & 		operator<<(std::ostream & o, Bureaucrat const & i);

#endif