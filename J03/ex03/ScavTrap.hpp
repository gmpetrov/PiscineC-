/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 11:56:38 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/08 21:42:08 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
# include <string>
# include <stdlib.h>
# include <time.h>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

	public:
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap(ScavTrap const & src, std::string name);
		ScavTrap &	operator=(ScavTrap const & rhs);

		void			challengeNewcomer(std::string const & target);
		void			bigBangAttack(std::string const & target);
		void			specialKunkFuKickAttack(std::string const & target);
		void			kickInBallsAttack(std::string const & target);
		void			spitAttack(std::string const & target);
		void			hugAttack(std::string const & target);
		static int		counter;
	private:
		
};
#endif
