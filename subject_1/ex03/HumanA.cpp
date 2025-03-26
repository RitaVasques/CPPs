/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HUmanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:02:39 by ritavasques       #+#    #+#             */
/*   Updated: 2024/06/25 15:12:07 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//CONSTRUCTOR & DESTRUCTOR
HumanA::HumanA( std::string name, Weapon &weapon ) : _name( name ), _weapon( weapon ) {}

HumanA::~HumanA( void ) {
    std::cout << this->_name << " was destroyed" << std::endl;
}

void HumanA::attack( void ) {
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
