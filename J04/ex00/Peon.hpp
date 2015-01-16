/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 13:01:04 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/09 13:01:06 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PEON_H
# define PEON_H

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon : public Victim{
	public:
		Peon(std::string name);
		~Peon(void);
		Peon(Peon const & src, std::string name);
		Peon &	operator=(Peon const & rhs);
		virtual void	getPolymorphed(void) const;
	private:
};

std::ostream & 	operator<<(std::ostream & o, Peon const & i);

#endif
