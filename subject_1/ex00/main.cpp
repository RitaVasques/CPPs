/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivasque <rivasque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:41:13 by ritavasques       #+#    #+#             */
/*   Updated: 2024/07/02 11:19:08 by rivasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) 
{
    Zombie *zigZag;
    
    zigZag = new Zombie("zigZag");
    zigZag->announce();
    
    randomChump("Zog");
    
    delete zigZag;
    return (0);
}
