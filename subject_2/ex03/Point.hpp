/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:07:09 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/17 11:05:01 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
	public:
		Point( void );
		Point( float const x, float const y );
		Point( Fixed const x, Fixed const y );
		Point( const Point& other );
		~Point( void );

		Point& operator=( Point& other );

		Fixed getX( void ) const;
		Fixed getY( void ) const;
		
    private:
        Fixed const	_x;
		Fixed const _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point );

#endif
