/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 22:09:58 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/06 23:22:12 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int		main(int ac, char **av)
{
	if (ac != 4){
		std::cout << "[USAGE] - ./replace <filename> <s1> <s2>" << std::endl;
		return 0;
	}
	std::string		name(av[1]);
	std::string		s1(av[2]);
	std::string		s2(av[3]);
	if (name.compare("") == 0 || s1.compare("") == 0 || s2.compare("") == 0){
		std::cout << "No empty string please" << std::endl;
	}
	std::string		outFile = name + ".replace";
	std::ifstream	file(name.c_str());
	std::ofstream	out(outFile.c_str());
	std::string tmp;

	while (std::getline(file, tmp)){
		size_t	pos = 0;
		while ((pos = tmp.find(s1, pos)) != std::string::npos){
			tmp.replace(pos, s1.length(), s2);
			pos += s2.length();
		}
		out << tmp << std::endl;
	}
	file.close();
	out.close();
	return 0;
}
