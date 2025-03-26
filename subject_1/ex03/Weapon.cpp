/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:02:10 by ritavasques       #+#    #+#             */
/*   Updated: 2024/06/25 14:46:45 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) {
    this->_type = type;
}

Weapon::~Weapon( void ) {
    std::cout << Weapon::getType() << " was destroyed" << std::endl;
}

void Weapon::setType( std::string new_type) {
    this->_type = new_type;

}

std::string const& Weapon::getType( void ) const {
    return this->_type;
}


