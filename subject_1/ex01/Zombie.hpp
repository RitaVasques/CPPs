/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 19:08:11 by ritavasques       #+#    #+#             */
/*   Updated: 2024/06/13 20:03:36 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string name;
    
    public:
    Zombie( void );
    ~Zombie( void );

    std::string getName( void );
    void setName(std::string name);
    void announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif