/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:17:39 by ritavasques       #+#    #+#             */
/*   Updated: 2024/06/25 17:52:11 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main( int argc, char **argv )
{
    std::string aux;
    
    if ( argc == 4 )
        sedIsForLosers( argv[1], argv[2], argv[3]) ;
    else
        std::cout << "Invalid Arguments" << std::endl;
    return (0);
}
