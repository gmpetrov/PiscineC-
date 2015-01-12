/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 23:07:25 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/12 23:35:54 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_H
# define PRESIDENTIAL_PARDON_FORM_H

# include <iostream>
# include <string>
# include "Form.hpp"
# include <fstream>

class PresidentialPardonForm : public Form{

	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(PresidentialPardonForm & src);
		virtual ~PresidentialPardonForm(void);
		PresidentialPardonForm &operator=(PresidentialPardonForm const & rhs);
		void 		execute(Bureaucrat const & executor);
	private:
};

#endif