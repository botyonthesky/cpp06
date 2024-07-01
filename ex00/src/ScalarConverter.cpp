/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 08:21:49 by tmaillar          #+#    #+#             */
/*   Updated: 2024/07/01 13:23:07 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "Scalar Converter default constructor" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
    std::cout << "Scalar Converter copy" << std::endl;
    *this = other;
}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
    std::cout <<  "Scalar Converter copy assignment" << std::endl;
    if (this != &other)
        *this = other;
    return (*this);
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "Scalar Converter destructor" << std::endl;
}
bool    ScalarConverter::isPrintable(int c)
{
    if (!isprint(c))
        return (false);
    return (true);
}

void    ScalarConverter::toChar(long double& num)
{
    std::cout << "char: ";
    int numInt;
    numInt = static_cast<int>(num);
    char c;
    c = static_cast<char>(num);
    if (num != numInt || num < 0)
    {
        std::cout << "impossible" << std::endl;
        return ;
    }   
    else if (num >= 32 && num <= 126)
    {
        std::cout << "'" << c << "'" << std::endl;
        return ;
    }
    else if (num <= 255)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "impossible" << std::endl;
}

void    ScalarConverter::toInt(const long double& num)
{
    std::cout << "int: ";
    int result;
    result = static_cast<int>(num);
     if (num < INT_MIN || num > INT_MAX )
    {
        std::cout << "impossible" << std::endl;
        return ;
    }
    else if (num != num)
    {
        std::cout << "impossible" << std::endl;
        return;
    }   
    std::cout << result << std::endl;
}
void    ScalarConverter::toFloat(const long double& num)
{
    std::cout << "float: ";
    float fresult;
    fresult = static_cast<float>(num);
    int fint = static_cast<int>(num);
    std::cout << fresult ;
    if (num < 1e6 && num > -1e6 && fint == num)
        std::cout << ".0";
    std::cout << "f" << std::endl;
}

void    ScalarConverter::toDouble(const long double& num)
{
    std::cout << "double: ";
    double dresult;
    dresult = static_cast<double>(num);
    int fint = static_cast<int>(num);
    std::cout << num;
    if (num < 1e6 && num > -1e6 && fint == num)
        std::cout << ".0" << std::endl;
    else
        std::cout << std::endl;
}

void ScalarConverter::convert(std::string src)
{   
    if (src == "f")
        std::cout << "Invalid input" << std::endl;
    long double num;
    num = 0;
    char* end;
    num = std::strtold(src.c_str(), &end);
    if (src.length() == 1 && !isdigit(src[0]) && num == 0)
    {
        num = src[0];
        end++;
    }
    if (*end == '\0' || (*end == 'f' && *(end + 1) == '\0'))
    {
        toChar(num);
        toInt(num);
        toFloat(num);
        toDouble(num);
    }

    

    
}