/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 11:54:26 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/09 11:58:45 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer{
	public:
		Sorcerer(std::string name, std::string title);
		~Sorcerer(void);
		Sorcerer(Sorcerer const & src, std::string name, std::string title);
		Sorcerer &	operator=(Sorcerer const & rhs);

		std::string	introduce(void) const;
		void 		polymorph(Victim const &) const;
	private:
		std::string		_name;
		std::string		_title;
};

std::ostream & 	operator<<(std::ostream & o, Sorcerer const & i);

#endif
