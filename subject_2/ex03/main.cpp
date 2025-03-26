/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 11:15:35 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/17 11:15:38 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
	Point const a( 0.0f, 0.0f );
	Point const b( 10.0f, 0.0f );
	Point const c( 0.0f, 8.0f );

	Point const p1(2.0f, 4.0f);
	Point const p2(7.0f, -1.0f);
	Point const p3(0.5f, 0.5f);
	Point const p4(5.0f, 5.0f);
	Point const p5(0.5f, 7.0f);
	Point const p6;
	
	std::cout << "p1: belongs inside triangle?";
	std::cout << ( bsp( a, b, c, p1 ) == true ? "true" : "false" );
	std::cout << std::endl;
	std::cout << "p2: belongs inside triangle?";
	std::cout << ( bsp( a, b, c, p2 ) == true ? "true" : "false" );
	std::cout << std::endl;
	std::cout << "p3: belongs inside triangle?";
	std::cout << ( bsp( a, b, c, p3 ) == true ? "true" : "false" );
	std::cout << std::endl;
	std::cout << "p4: belongs inside triangle?";
	std::cout << ( bsp( a, b, c, p4 ) == true ? "true" : "false" );
	std::cout << std::endl;
	std::cout << "p5: belongs inside triangle?";
	std::cout << ( bsp( a, b, c, p5 ) == true ? "true" : "false" );
	std::cout << std::endl;
	std::cout << "p6: belongs inside triangle?";
	std::cout << ( bsp( a, b, c, p6 ) == true ? "true" : "false" );
	std::cout << std::endl;

	return (0);
}
