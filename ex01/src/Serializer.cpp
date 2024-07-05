/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:15:22 by tmaillar          #+#    #+#             */
/*   Updated: 2024/07/05 07:21:56 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Serializer default constructor" << std::endl;
}
Serializer::Serializer(const Serializer& other)
{
    std::cout << "Serializer copy" << std::endl;
    *this = other;
}
Serializer& Serializer::operator=(const Serializer& other)
{
    std::cout << "Serializer copy assignment" << std::endl;
    if (this != &other)
        *this = other;
    return (*this);
}

Serializer::~Serializer()
{
    std::cout << "Serializer destructor" << std::endl;
}
uintptr_t   Serializer::serialize(Data* ptr)
{
    uintptr_t result;
    result = reinterpret_cast<uintptr_t>(ptr);
    return (result);
}
Data* Serializer::deserialize(uintptr_t raw)
{
    Data* result;
    result = reinterpret_cast<Data*>(raw);
    return (result);
}