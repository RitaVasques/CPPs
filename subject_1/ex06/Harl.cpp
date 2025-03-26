/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivasque <rivasque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 19:22:26 by ritavasques       #+#    #+#             */
/*   Updated: 2024/07/02 11:22:18 by rivasque         ###   ########.fr       */
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

int Harl::getIndex( std::string level ) {
    for (int i = 0; i < 4; i++)
    {
        if ( this->_level[i] == level )
            return ( i );
    }
    return ( -1 );
}

void Harl::complain( std::string level ) {
    int i = getIndex( level );

    switch (i) {
        case DEBUG:
            std::cout << "[ DEBUG ]" << std::endl;
            (this->*_f[0])();
            break ;
        case INFO:
            std::cout << "[ INFO ]" << std::endl;
            (this->*_f[0])();
            (this->*_f[1])();
            break ;
        case WARNING:
            std::cout << "[ WARNING ]" << std::endl;
            (this->*_f[0])();
            (this->*_f[1])();
            (this->*_f[2])();
            break ;
        case ERROR:
            std::cout << "[ ERROR ]" << std::endl;
            (this->*_f[0])();
            (this->*_f[1])();
            (this->*_f[2])();
            (this->*_f[3])();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break ;
    }
}
