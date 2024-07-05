/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 08:21:38 by tmaillar          #+#    #+#             */
/*   Updated: 2024/07/05 07:07:45 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <climits>
#include <cstdlib>

class ScalarConverter
{
    private:
    
        ScalarConverter();
        ScalarConverter(const ScalarConverter& other);
        ScalarConverter& operator=(const ScalarConverter& other);
        ~ScalarConverter();
        
        static void             toChar(const long double& num);
        static void             toInt(const long double& num);
        static void             toFloat(const long double& num);
        static void             toDouble(const long double& num);

    public:

        static void             convert(std::string src);
    
};




#endif