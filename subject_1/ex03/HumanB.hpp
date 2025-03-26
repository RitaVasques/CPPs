/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:02:58 by ritavasques       #+#    #+#             */
/*   Updated: 2024/06/19 16:54:23 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
    private:
    	std::string _name;
    	Weapon* _typeB;
    public:
        HumanB ( std::string name );
        ~HumanB ( void );
		void setWeapon(Weapon& typeB);
        void attack( void );
};

#endif