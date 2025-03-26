/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 11:17:44 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/05 17:59:58 by ritavasques      ###   ########.fr       */
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

Fixed::Fixed( const int nbr ) {
	std::cout << "Int constructor called" << std::endl;
	setRawBits(nbr << this->_fracBits);
};

Fixed::Fixed( const float nbr ) {
	std::cout << "Float constructor called" << std::endl;
	setRawBits((int)roundf(nbr * (1 << this->_fracBits)));
};

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
};

//GETTERS & SETTERS
int Fixed::getRawBits( void ) const {
	return (this->_fixedPoint);	
};

void Fixed::setRawBits( int const raw ) {
	this->_fixedPoint = raw;	
};

//ASSIGNMENT OPERATOR
Fixed& Fixed::operator=( const Fixed& other ) {
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits( other.getRawBits() );
	return (*this);
};

//Input divided by 2 _fracBits, stroing the result into a float
float	Fixed::toFloat( void ) const {
	
	float result;

	result = (float)this->getRawBits() / (1 << this->_fracBits );
	return (result);
};

int	Fixed::toInt( void ) const {
	return (this->getRawBits() >> this->_fracBits);
};

std::ostream& operator<<( std::ostream& out, const Fixed& other ) {
	out << other.toFloat();
	return (out);
};