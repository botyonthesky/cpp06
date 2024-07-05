/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 08:21:07 by tmaillar          #+#    #+#             */
/*   Updated: 2024/07/05 07:19:23 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

void    charAndNonPrintableTest(void)
{
    std::cout << "[ CHAR AND NON PRINTABLE CARACTERE TEST ]" << std::endl;
    std::string letterC = "c";
    std::string letterA = "a";
    std::string letterS = "s";
    std::string letterT = "t";
    std::string nonPrintT = "\t";
    std::string nonPrintN = "\n";
    std::string nonPrintR = "\r";
    std::string nonPrintV = "\v";

    std::cout << "[ LETTER C TEST ] : " << letterC << std::endl;
    ScalarConverter::convert(letterC);
    std::cout << std::endl;
    std::cout << "[ LETTER A TEST ] : " << letterA << std::endl;
    ScalarConverter::convert(letterA);
    std::cout << std::endl;
    std::cout << "[ LETTER S TEST ] : " << letterS << std::endl;
    ScalarConverter::convert(letterS);
    std::cout << std::endl;
    std::cout << "[ LETTER T TEST ] : " << letterT << std::endl;
    ScalarConverter::convert(letterT);
    std::cout << std::endl;
    std::cout << "[ NON PRINTABLE '\\t ] : " << nonPrintT << std::endl;
    ScalarConverter::convert(nonPrintT);
    std::cout << std::endl;
    std::cout << "[ NON PRINTABLE '\\n ] : " << nonPrintN << std::endl;
    ScalarConverter::convert(nonPrintN);
    std::cout << std::endl;
    std::cout << "[ NON PRINTABLE '\\r ] : " << nonPrintR << std::endl;
    ScalarConverter::convert(nonPrintR);
    std::cout << std::endl;
    std::cout << "[ NON PRINTABLE '\\v ] : " << nonPrintV << std::endl;
    ScalarConverter::convert(nonPrintV);
}

void    positiveTest(void)
{
    std::cout << "[ POSITIVE TEST ]" << std::endl;
    std::string testChar = "+0";
    std::string testInt = "+42";
    std::string testFloat = "+42.0f";
    std::string testDouble = "+1e7";
    std::string testNan = "+nan";
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
    std::string testChar = "-0";
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

void    unsignedTest(void)
{
    std::cout << "[ UNSIGNED TEST ]" << std::endl;
    std::string testChar = "0";
    std::string testInt = "42";
    std::string testFloat = "42.0f";
    std::string testDouble = "1e7";
    std::string testNan = "nan";
    std::string testInf = "inf";
    std::string testInff = "inff";

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

int main(int argc, char **argv)
{
    if (argc == 2)
        ScalarConverter::convert(argv[1]);
    else
        std::cout << "Only one argv please" << std::endl;
    return (0);
}

// int main()
// {
//     charAndNonPrintableTest();
//     std::cout << std::endl;
//     unsignedTest();
//     std::cout << std::endl;
//     positiveTest();
//     std::cout << std::endl;
//     negativeTest();   
//     return (0);
// }