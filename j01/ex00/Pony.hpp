/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 13:32:08 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/06 13:59:56 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <string>

class Pony{
	public:
		Pony(std::string color, std::string sex, std::string name);
		~Pony(void);
		std::string	getColor(void);
		std::string	getSex(void);
		std::string	getName(void);
		void		setColor(std::string color);
		void		setSex(std::string sex);
		void		setName(std::string name);
	private:
		std::string	_color;
		std::string	_sex;
		std::string	_name;
};

#endif
