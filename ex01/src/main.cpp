/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:14:50 by tmaillar          #+#    #+#             */
/*   Updated: 2024/07/05 07:34:16 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"
#include "../include/Data.hpp"

void    subjectTest(void)
{
    std::cout << "[ SUBJECT TEST ]" << std::endl;
    Data data;
    data.id = 42;
    data.name = "42";
    std::cout << "Data.id : " << data.id << std::endl;
    std::cout << "Data.name : " << data.name << std::endl;
    
    std::cout << "[ SERIALIZER ]" << std::endl;
    
    uintptr_t raw = Serializer::serialize(&data);
    std::cout << "Serialized id : " << raw << std::endl;

    std::cout << "[ DESERIALIZER ]" << std::endl;
    
    Data* deserializeData = Serializer::deserialize(raw);
    std::cout << "Deserialized id : " << deserializeData->id << std::endl;
    std::cout << "Deserialized name : " << deserializeData->name << std::endl;

    if (deserializeData == &data)
        std::cout << "Success: The deserialized pointer is equal to the original pointer." << std::endl;
    else
        std::cout << "Error: The deserialized pointer is not equal to the original pointer." << std::endl;

}

int main()
{
    subjectTest();
    return (0);
}