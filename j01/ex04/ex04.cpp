/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 18:00:02 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/06 18:09:35 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main(void)
{
	std::string		phrase = "HI THIS IS BRAIN";
	std::string		*phrasePtr = &phrase;
	std::string		&phraseRef = phrase;

	std::cout << "Displaying with pointer : " << std::endl << *phrasePtr << std::endl;
	std::cout << "Displaying with reference : " << std::endl << phraseRef << std::endl;
	return (0);
}
