/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 14:12:16 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/14 15:00:58 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename ARRAY, typename SIZE, typename FUNC>

void 	iter(ARRAY *array, SIZE size , FUNC (*func)(ARRAY)){
	int		i = 0;
	while (i < size){
		func(array[i]);
		i++;
	}
}

int	db(int a){
	a = a * 2;
	std::cout << a << std::endl;
	return a; 
}


int		main(){


	int		size = 10;

	int		test[size];

	for (int i = 0; i < size; i++){
		test[i] = i;
		std::cout << "array[" << i << "] = " << i << std::endl;
	}

	std::cout << "calling iter(int *, int, int (*db)(int))" << std::endl;
	std::cout << "function db return the parameter value * 2" << std::endl;
	iter<int, int, int>(test, size, &db);
	return 0;
}