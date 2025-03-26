/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivasque <rivasque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:04:50 by ritavasques       #+#    #+#             */
/*   Updated: 2024/07/02 11:21:49 by rivasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {
    this->_level[0] = "DEBUG";
    this->_level[1] = "INFO";
    this->_level[2] = "WARNING";
    this->_level[3] = "ERROR";
    this->_f[0] = &Harl::debug;
    this->_f[1] = &Harl::info;
    this->_f[2] = &Harl::warning;
    this->_f[3] = &Harl::error;         
}

Harl::~Harl( void ) {
    std::cout << "Harl was destroyed" << std::endl;
}

void Harl::debug( void ) {
    std::cout << "I love C++" << std::endl;
}

void Harl::info( void ) {
    std::cout << "I can`t believe how much I've learned of C++ so far..." << std::endl;
}

void Harl::warning( void ) {
    std::cout << "I can't get to confident, still have to work on the pointers to member functions" << std::endl;
}

void Harl::error( void ) {
    std::cout << "Something is not working, I have to go back to the tutorials" << std::endl;
}

void Harl::complain( std::string level ) {
    for (int i = 0; i < 4; i++)
    {
        if ( this->_level[i] == level )
            return ( (this->*_f[i])() );
    }
}
