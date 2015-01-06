/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 18:15:09 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/06 19:56:07 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>
# include <string>

class Brain{

	public:
		Brain(void);
		~Brain(void);
		std::string	identify(void) const;
	private:
		std::string	_addr;
};

#endif
