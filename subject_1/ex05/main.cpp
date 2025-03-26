/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivasque <rivasque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:46:28 by ritavasques       #+#    #+#             */
/*   Updated: 2024/07/02 11:16:15 by rivasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( int argc, char **argv )
{
    Harl Harl;
    std::string level;
    
    if (argc == 2)
        Harl.complain(argv[1]);
    else
        std::cout << "Invalid Arguments" << std::endl;
    return (0);
}
