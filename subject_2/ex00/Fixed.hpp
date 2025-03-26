/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 11:17:22 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/05 14:39:29 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
    private:
        int _fixedPoint;
        static const int _fracBits = 8;
    public:
        Fixed( void );
        Fixed( const Fixed& other );
        ~Fixed( void );
        
        Fixed& operator=( const Fixed& other );
        
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif