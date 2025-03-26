/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivasque <rivasque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 19:07:36 by ritavasques       #+#    #+#             */
/*   Updated: 2024/07/02 11:20:04 by rivasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {
    this->name = "";
}

Zombie::~Zombie( void ) {
    std::cout << Zombie::getName() << " was destroyed" << std::endl;
}

void Zombie::setName( std::string name ) {
    this->name = name;
}

std::string Zombie::getName( void ) {
    return this->name;
}

void Zombie::announce( void ) {
    std::cout << Zombie::getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
