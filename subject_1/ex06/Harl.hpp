/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivasque <rivasque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 19:22:47 by ritavasques       #+#    #+#             */
/*   Updated: 2024/07/02 11:22:39 by rivasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl {
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		
		void ( Harl::*_f[4] )( void );
		std::string _level[4];
	public:
		Harl( void );
		~Harl( void );
		void complain( std::string level );
        int getIndex( std::string level );
};

enum e_levels {
    DEBUG,
    INFO,
    WARNING,
    ERROR
};

#endif