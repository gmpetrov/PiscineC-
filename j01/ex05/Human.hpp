/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 18:15:52 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/06 19:52:04 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

# include <iostream>
# include <string>
# include "Brain.hpp"

class Human{
	public:
		Human(void);
		~Human(void);
		Brain const brain;
		std::string	identify(void) const;
		Brain		getBrain(void);

};

#endif
