/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 08:21:07 by tmaillar          #+#    #+#             */
/*   Updated: 2024/07/01 13:24:46 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

// int main(int argc, char **argv)
// {
//     if (argc == 2)
//         ScalarConverter::convert(argv[1]);
//     else
//         std::cout << "Only one argv please" << std::endl;
//     return (0);
// }

void    positiveTest(void)
{
    std::cout << "[ POSITIVE TEST ]" << std::endl;
    std::string testChar = "0";
    std::string testInt = "+42";
    std::string testFloat = "+42.0f";
    std::string testDouble = "+1e7";
    std::string testNan = "nan";
    std::string testInf = "+inf";
    std::string testInff = "+inff";

    std::cout << "[ CHAR TEST ] : " << testChar << std::endl;
    ScalarConverter::convert(testChar);
    std::cout << std::endl;
    std::cout << "[ INT TEST ] : " << testInt << std::endl;
    ScalarConverter::convert(testInt);
    std::cout << std::endl;
    std::cout << "[ FLOAT TEST ] : " << testFloat << std::endl;
    ScalarConverter::convert(testFloat);
    std::cout << std::endl;
    std::cout << "[ DOUBLE TEST ] : " << testDouble << std::endl;
    ScalarConverter::convert(testDouble);
    std::cout << std::endl;
    std::cout << "[ NAN TEST ] : " << testNan << std::endl;
    ScalarConverter::convert(testNan);
     std::cout << std::endl;
    std::cout << "[ INF TEST ] : " << testInf << std::endl;
    ScalarConverter::convert(testInf);
         std::cout << std::endl;
    std::cout << "[ INFF TEST ] : " << testInff << std::endl;
    ScalarConverter::convert(testInff);
}

void    negativeTest(void)
{
    std::cout << "[ NEGATIVE TEST ]" << std::endl;
    std::string testChar = "0";
    std::string testInt = "-42";
    std::string testFloat = "-42.0f";
    std::string testDouble = "-1e7";
    std::string testNan = "-nan";
    std::string testInf = "-inf";
    std::string testInff = "-inff";

    std::cout << "[ CHAR TEST ] : " << testChar << std::endl;
    ScalarConverter::convert(testChar);
    std::cout << std::endl;
    std::cout << "[ INT TEST ] : " << testInt << std::endl;
    ScalarConverter::convert(testInt);
    std::cout << std::endl;
    std::cout << "[ FLOAT TEST ] : " << testFloat << std::endl;
    ScalarConverter::convert(testFloat);
    std::cout << std::endl;
    std::cout << "[ DOUBLE TEST ] : " << testDouble << std::endl;
    ScalarConverter::convert(testDouble);
    std::cout << std::endl;
    std::cout << "[ NAN TEST ] : " << testNan << std::endl;
    ScalarConverter::convert(testNan);
    std::cout << std::endl;
    std::cout << "[ INF TEST ] : " << testInf << std::endl;
    ScalarConverter::convert(testInf);
    std::cout << std::endl;
    std::cout << "[ INFF TEST ] : " << testInff << std::endl;
    ScalarConverter::convert(testInff);
}

int main()
{
    positiveTest();
    std::cout << std::endl;
    negativeTest();   
    return (0);
}