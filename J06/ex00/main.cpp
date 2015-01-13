/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmp <gmp@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 10:01:31 by gmp               #+#    #+#             */
/*   Updated: 2015/01/13 11:03:00 by gmp              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <limits>

void 	isChar(char c){
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

int		main(int ac, char **av)
{
	if (ac != 2){
		std::cout << "[USAGE] - ./convert <value>" << std::endl;
		return 0;
	}
	std::cout << av[1] << std::endl;
	try{
		std::string testChar = av[1];
		if (testChar.length() == 1)
			isChar(static_cast<char>(av[1][0]));
	}
	catch(std::exception e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}