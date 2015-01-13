/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 13:22:50 by gmp               #+#    #+#             */
/*   Updated: 2015/01/13 00:11:54 by gpetrov          ###   ########.fr       */
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
		void 				executeForm(Form const & form);
		class GradeTooHighException : public std::exception {
			public:
				GradeTooHighException() throw();
				GradeTooHighException(GradeTooHighException const & src) throw();
				~GradeTooHighException() throw();
				GradeTooHighException & operator=(GradeTooHighException const & rhs) throw();
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				GradeTooLowException() throw();
				GradeTooLowException(GradeTooLowException const & src) throw();
				~GradeTooLowException() throw();
				GradeTooLowException & operator=(GradeTooLowException const & rhs) throw();
				virtual const char *what() const throw();
		};
		Form 	*form;
	private:
		std::string const 	_name;
		int					_grade;
};

std::ostream & 		operator<<(std::ostream & o, Bureaucrat const & i);

#endif