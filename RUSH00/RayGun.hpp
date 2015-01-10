/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RayGun.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 22:58:07 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/10 23:14:04 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAYGUN_H
# define RAYGUN_H

# include <iostream>
# include <string>

# include "Weapon.hpp"

class RayGun : public Weapon{
	public:
		RayGun(void);
		RayGun(RayGun const & stc);
		~RayGun(void);
		RayGun &		operator=(RayGun const & rhs);
	protected:

};

#endif