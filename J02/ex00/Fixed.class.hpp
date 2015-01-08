/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 14:45:31 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/07 15:42:55 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

# include <iostream>
# include <string>

class Fixed{

	public:
		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);
		Fixed &		operator=(Fixed const & rhs);
		int			getRawBits(void) const;
		void		setRawBits(int const raw);
	private:
		int			_rawBits;
		int const	_nbBits;

};
#endif
