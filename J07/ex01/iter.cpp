/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 14:12:16 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/14 15:29:47 by gpetrov          ###   ########.fr       */
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

template <typename DB>
DB	db(DB a){
	a = a * 2;
	std::cout << a << std::endl;
	return a; 
}


int		main(){


	int		size = 10;

	float		test[size];

	float z = 1.42;
	for (int i = 0; i < size; i++){
		test[i] = z + i;
		std::cout << "array[" << i << "] = " << test[i] << std::endl;
	}

	std::cout << "calling iter(int *, int, int (*db)(int))" << std::endl;
	std::cout << "function db return the parameter value * 2" << std::endl;
	iter<float, int, float>(test, size, &db);
	return 0;
}