/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivasque <rivasque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:03:09 by ritavasques       #+#    #+#             */
/*   Updated: 2024/07/02 10:56:58 by rivasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name), _typeB(NULL) {}

HumanB::~HumanB( void ) {
    std::cout << this->_name << " was destroyed" << std::endl;
}

void HumanB::setWeapon( Weapon& typeB) {
    this->_typeB = &typeB;
}

void HumanB::attack( void ) {
    if (_typeB)
        std::cout << this->_name << " attacks with their " << _typeB->getType() << std::endl;
    else
        std::cout << this->_name << " attacks with no weapon!" << std::endl;
}
