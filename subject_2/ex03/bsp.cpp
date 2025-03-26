/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:07:41 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/17 11:15:06 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// https://www.youtube.com/watch?v=HYAgJN3x4GA

//Firts side of the triangle
// num = (Ax * (Cy - Ay)) + (Py - Ay) * (Cx - Ax) - Px * (Cy - Ay)
// denum = (By - Ay) * (Cx - Ax) - (Bx - Ax) * (Cy - Ay)
// result = num / denum
Fixed *getS1( Point const a, Point const b, Point const c, Point const p) {
	Fixed Ax = a.getX();
	Fixed Ay = a.getY();
	Fixed Bx = b.getX();
	Fixed By = b.getY();
	Fixed Cx = c.getX();
	Fixed Cy = c.getY();
	Fixed Px = p.getX();
	Fixed Py = p.getY();

	Fixed num = (Ax * (Cy - Ay)) + (Py - Ay) * (Cx  - Ax) - Px * (Cy - Ay);
	Fixed denum = (By - Ay) * (Cx - Ax) - (Bx - Ax) * (Cy - Ay);
	Fixed result = num / denum;
	Fixed *S1 = new Fixed(result);
	return (S1);
}

//Second side of triangle
//num = Py - Ay - S1 * (By - Ay)
//denum = Cy - Ay
//result = num / denum
Fixed *getS2(Fixed S1, Point const a, Point const b, Point const c, Point const p) {
	Fixed Ay = a.getY();
	Fixed By = b.getY();
	Fixed Cy = c.getY();
	Fixed Py = p.getY();
	
	Fixed num = Py - Ay - S1 * (By - Ay);
	Fixed denum = Cy - Ay;
	Fixed result = num / denum;
	Fixed *S2 = new Fixed(result);
	return (S2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed *S1 = getS1(a, b, c, point);
	Fixed *S2 = getS2(*S1, a, b, c, point);
	
	bool result = true;
	
	if (*S1 > 0 && *S2 > 0 && (*S1 + *S2) < 1)
		result = true;
	else
		result = false;
	delete S1;
	delete S2;
	return (result);
}