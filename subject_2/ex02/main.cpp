/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 11:15:35 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/17 10:57:16 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	
    Fixed		a;
    Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    
    std::cout << b << std::endl;
    
    std::cout << Fixed::max( a, b ) << std::endl;
    
    std::cout << std::endl;
    std::cout << "[MORE TESTS]" << std::endl;
    Fixed c = a;
    std::cout << Fixed::min( a, b ) << std::endl;
    std::cout << b + Fixed(2) << std::endl;
    std::cout << b - Fixed(2) << std::endl;
    std::cout << b / Fixed(2) << std::endl;
    std::cout << b * Fixed(2) << std::endl;
    std::cout << ( c != a ) << std::endl;
    std::cout << (c == a) << std::endl;

    return 0;
}
