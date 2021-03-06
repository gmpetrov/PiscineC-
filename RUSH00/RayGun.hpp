/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RayGun.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 22:58:07 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/11 16:17:28 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAYGUN_H
# define RAYGUN_H

# include <iostream>
# include <string>


# include "Weapon.hpp"
# include "Ammo.hpp"
# include "AmmoPlayer.hpp"

class RayGun : public Weapon{
	public:
		RayGun(void);
		RayGun(RayGun const & stc);
		~RayGun(void);
		RayGun &		operator=(RayGun const & rhs);
	protected:

};

#endif