/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 14:45:31 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/07 18:18:39 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

# include <iostream>
# include <string>
# include <cmath>

class Fixed{

	public:
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(int const value);
		Fixed(float const value);
		~Fixed(void);
		Fixed &		operator=(Fixed const & rhs);
		int			getRawBits(void) const;
		void		setRawBits(int const raw);
		float		toFloat(void) const;
		int			toInt(void) const;

	private:
		int			_rawBits;
		int const	_nbBits;

};

std::ostream &		operator<<(std::ostream & o, Fixed const & i);

#endif
