/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:07:27 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/17 11:04:54 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ): _x(0), _y(0) {}

Point::Point( float const x, float const y ): _x(x), _y(y) {}

Point::Point( const Point& other ): _x(other.getX()), _y(other.getY()) {}

Point::Point( Fixed const x, Fixed const y): _x(x), _y(y) {}

Point::~Point ( void ) {}

Point& Point::operator=( Point& other ) {
	return (other);
}

Fixed Point::getX( void ) const {
    return (this->_x);
}

Fixed Point::getY( void ) const {
    return (this->_y);
}
