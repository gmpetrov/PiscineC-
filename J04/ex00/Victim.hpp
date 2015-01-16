/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 12:03:01 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/09 12:04:48 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H

# include <iostream>
# include <string>

class Victim{
	public:
		Victim(std::string name);
		~Victim(void);
		Victim(Victim const & src, std::string name);
		Victim &		operator=(Victim const & rhs);
		std::string		introduce(void) const;
		virtual void 	getPolymorphed(void) const;
	protected:
		std::string		_name;
};

std::ostream &	operator<<(std::ostream & o, Victim const & i);


#endif
