/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 19:22:16 by ritavasques       #+#    #+#             */
/*   Updated: 2024/06/25 20:31:20 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl Harl;

    if (argc == 2)
    {
        Harl.complain(argv[1]);
    }
    else
        std::cout << "Invalid Arguments" << std::endl;
    return (0);
}
