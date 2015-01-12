/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 22:20:50 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/13 00:11:31 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOT_TO_MY_REQUEST_FORM_H
# define ROBOT_TO_MY_REQUEST_FORM_H

# include <iostream>
# include <string>
# include "Form.hpp"
# include <fstream>

class RobotomyRequestForm : public Form{

	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(RobotomyRequestForm & src);
		~RobotomyRequestForm(void);
		RobotomyRequestForm &operator=(RobotomyRequestForm const & rhs);
		void 		execute(Bureaucrat const & executor);
	private:

	static int 		half;
};

#endif