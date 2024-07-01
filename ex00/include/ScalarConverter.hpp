/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 08:21:38 by tmaillar          #+#    #+#             */
/*   Updated: 2024/07/01 10:07:24 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

class ScalarConverter
{
private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter& other);
    ScalarConverter& operator=(const ScalarConverter& other);
    ~ScalarConverter();
public:

    static void             convert(std::string src);
    static bool             isPrintable(int c);
    static void             toChar(long double& num);
    static void                toChar2(char check);

    static void             toInt(const long double& num);
    static void             toFloat(const long double& num);
    static void             toDouble(const long double& num);

    

};




#endif