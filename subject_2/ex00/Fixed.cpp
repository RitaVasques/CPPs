/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 11:17:44 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/05 14:52:22 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//CONSTRUCTOR & DESTRUCTOR
Fixed::Fixed( void ) {
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPoint = 0;
};

Fixed::Fixed( const Fixed& other ) {
    std::cout << "Copy constructor called" << std::endl;
	*this = other;
};

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
};

//GETTERS & SETTERS
int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPoint;	
};

void Fixed::setRawBits( int const raw ) {
	this->_fixedPoint = raw;	
};

//ASSIGNMENT OPERATOR
Fixed& Fixed::operator=( const Fixed& other ) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits( other.getRawBits() );
	return *this;
};
