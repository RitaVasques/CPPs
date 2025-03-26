/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivasque <rivasque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:41:38 by ritavasques       #+#    #+#             */
/*   Updated: 2024/07/02 11:19:34 by rivasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
    std::string	name;
public:
	//CONSTRUCTOR & DESTRUCTOR
	Zombie( std::string name );
	~Zombie( void );
	
	std::string getName( void );
	void announce( void );
};

//Functions
Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
