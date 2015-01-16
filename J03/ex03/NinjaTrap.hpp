/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 23:04:23 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/08 23:04:28 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef NINJATRAP_H
# define NINJATRAP_H

# include <iostream>
# include <string>
# include <stdlib.h>
# include <time.h>
# include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap{

	public:
		NinjaTrap(std::string name);
		~NinjaTrap(void);
		NinjaTrap(NinjaTrap const & src, std::string name);
		NinjaTrap &	operator=(NinjaTrap const & rhs);
		void	ninjaShoebox(std::string name);
		unsigned int	getGodFart(void);
	private:
		
};
#endif
