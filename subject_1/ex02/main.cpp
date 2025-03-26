/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivasque <rivasque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 11:45:05 by ritavasques       #+#    #+#             */
/*   Updated: 2024/07/02 11:20:34 by rivasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) 
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *brainPtr = &brain;
    std::string &brainRef = brain;
    
    //Print memory adress
    std::cout << "Memory adress variable: " << &brain << std::endl;
    std::cout << "Memory adress ptr: " << brainPtr << std::endl;
    std::cout << "Memory adress ref: " << &brainRef << std::endl;
    //print value
    std::cout << "Value variable: " << brain << std::endl;
    std::cout << "Value ptr: " << *brainPtr << std::endl;
    std::cout << "Value ref: " << brainRef << std::endl;

    return (0);
}
