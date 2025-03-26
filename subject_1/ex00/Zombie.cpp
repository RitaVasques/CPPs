/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivasque <rivasque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:41:45 by ritavasques       #+#    #+#             */
/*   Updated: 2024/07/02 11:19:28 by rivasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//CONSTRUCTOR
Zombie::Zombie( std::string name ) {
    this->name = name;
}

//DESTRUCTOR
Zombie::~Zombie( void ) {
    std::cout << Zombie::getName() << " was destroyed" << std::endl;
}

std::string Zombie::getName( void ) {
    return this->name;
}

void Zombie::announce( void ) {
    std::cout << Zombie::getName() << " :BraiiiiiiinnnzzzZ..." << std::endl;
}
