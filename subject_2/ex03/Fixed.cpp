/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 11:17:44 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/09 11:19:24 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//CONSTRUCTOR & DESTRUCTOR
Fixed::Fixed( void ) {
    this->_fixedPoint = 0;
}

Fixed::Fixed( const Fixed& other ) {
	*this = other;
}

Fixed::Fixed( const int nbr ) {
	setRawBits(nbr << this->_fracBits);
}

Fixed::Fixed( const float nbr ) {
	setRawBits((int)roundf(nbr * (1 << this->_fracBits)));
}

Fixed::~Fixed( void ) {
}

//GETTERS & SETTERS
int Fixed::getRawBits( void ) const {
	return (this->_fixedPoint);	
}

void Fixed::setRawBits( int const raw ) {
	this->_fixedPoint = raw;	
}

//ASSIGNMENT OPERATOR
Fixed& Fixed::operator=( const Fixed& other ) {
	setRawBits( other.getRawBits() );
	return (*this);
}

//Input divided by 2 _fracBits, stroing the result into a float
float	Fixed::toFloat( void ) const {
	
	float result;

	result = (float)this->getRawBits() / (1 << this->_fracBits );
	return (result);
}

int	Fixed::toInt( void ) const {
	return (this->getRawBits() >> this->_fracBits);
}

std::ostream& operator<<( std::ostream& out, const Fixed& other ) {
	out << other.toFloat();
	return (out);
}

// < > >= <= == !=
bool Fixed::operator>( const Fixed& other ) const {
	if (this->getRawBits() > other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<( const Fixed& other ) const {
	if (this->getRawBits() < other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>=( const Fixed& other ) const {
	if (this->getRawBits() >= other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=( const Fixed& other ) const {
	if (this->getRawBits() <= other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator==( const Fixed& other ) const {
	if (this->getRawBits() == other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=( const Fixed& other ) const {
	if (this->getRawBits() != other.getRawBits())
		return (true);
	return (false);
}

// + - * /
Fixed Fixed::operator+(const Fixed& other ) const {
	Fixed result(this->toFloat() + other.toFloat());
	return (result);
}

Fixed Fixed::operator-(const Fixed& other ) const {
	Fixed result(this->toFloat() - other.toFloat());
	return (result);
}

Fixed Fixed::operator*(const Fixed& other ) const {
	Fixed result(this->toFloat() * other.toFloat());
	return (result);
}

Fixed Fixed::operator/(const Fixed& other ) const {
	Fixed result(this->toFloat() / other.toFloat());
	return (result);
}

// ++other other++ --other other--
Fixed& Fixed::operator++( void ) {
	this->_fixedPoint ++;
	return (*this);
}

Fixed Fixed::operator++( int ) {
	Fixed temp = *this;
	this->_fixedPoint++;
	return (temp);
}

Fixed& Fixed::operator--( void ) {
	this->_fixedPoint--;
	return (*this);
}

Fixed Fixed::operator--( int ) {
	Fixed temp = *this;
	this->_fixedPoint--;
	return (temp);
}
        
//min & max
Fixed& Fixed::min( Fixed& a, Fixed& b ) {
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b ) {
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed& Fixed::max( Fixed& a, Fixed& b ) {
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed& Fixed::max( const Fixed& a, const Fixed& b ) {
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}
