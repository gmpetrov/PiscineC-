/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 12:17:40 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/15 12:40:32 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <map>
# include <vector>
# include <list> 
# include <iostream>
# include <algorithm>

template <typename T>
void easyfind(T container, int i){

	typename T::iterator it;

	it = find(container.begin(), container.end(), i);
	if (it == container.end())
		throw std::exception();
	else
		std::cout << *it << std::endl;
}


#endif