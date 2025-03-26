/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivasque <rivasque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:37:08 by ritavasques       #+#    #+#             */
/*   Updated: 2024/07/02 11:21:24 by rivasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

static std::string replace_line( std::string line, std::string s1, std::string s2 ) {
	std::size_t i;
    
	i = 0;
	while (1)
	{
		i = line.find( s1, i );
		if ( i == std::string::npos )
			break ;
		line = line.erase( i, s1.length() );
	    line = line.insert( i,  s2 );
		i += s2.length();
    }
	return ( line );
}

void sedIsForLosers( std::string filename, std::string s1, std::string s2 )
{
    std::ifstream inputFile;
    std::ofstream outputFile;
    std::string   line;
    
    inputFile.open( filename.c_str() );
    if (inputFile.fail())
    {
        std::cout << "Error: failed to open file " << filename << std::endl;
        return ;
    }
    outputFile.open( (filename + ".replace").c_str() );
    if (outputFile.fail())
    {
        std::cout << "Error: failed to create " << filename << ".replace" << std::endl;
        return ;
    }
    while(getline( inputFile, line ))
        outputFile << replace_line( line, s1, s2 ) << std::endl;
    inputFile.close();
	outputFile.close();
}
