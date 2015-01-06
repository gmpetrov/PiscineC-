/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 18:16:06 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/06 19:58:07 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

int		main()
{
	Human	bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}
