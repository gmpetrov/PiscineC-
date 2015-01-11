/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnemyBasic.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 19:18:41 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/12 00:19:52 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_BASIC_H
# define ENEMY_BASIC_H

# include <iostream>
# include <string>

# include "Enemy.hpp"

class EnemyBasic : public Enemy{
	public:
		EnemyBasic(void);
		EnemyBasic(EnemyBasic const & src);
		~EnemyBasic(void);
		EnemyBasic &		operator=(EnemyBasic const & rhs);
		int				getNb();
		virtual void 	attack();
	protected:

	static int			nb;
};

#endif