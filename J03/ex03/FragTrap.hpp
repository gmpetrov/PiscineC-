/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 11:56:38 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/08 20:49:14 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>
# include <string>
# include <stdlib.h>
# include <time.h>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap{

	public:
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(FragTrap const & src, std::string name);
		FragTrap &	operator=(FragTrap const & rhs);

		unsigned int	vaulthunter_dot_exe(std::string const & target);

		unsigned int	bigBangAttack(std::string const & target);
		unsigned int	specialKunkFuKickAttack(std::string const & target);
		unsigned int	kickInBallsAttack(std::string const & target);
		unsigned int	spitAttack(std::string const & target);
		unsigned int	hugAttack(std::string const & target);
		static int		counter;
	private:

};
#endif
