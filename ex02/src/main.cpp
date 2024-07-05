/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:57:32 by tmaillar          #+#    #+#             */
/*   Updated: 2024/07/05 08:46:50 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/main.hpp"

Base* generate(void)
{
    int random;
    std::srand(std::time(0));
    random = std::rand() % 3;
    
    switch (random)
    {
        case 0:
            {
                try
                {
                    return (new A);
                }
                catch (const std::bad_alloc& e)
                {
                    std::cout << "Memory alloctaion failed : " << e.what() << std::endl;
                    return (NULL);
                }
            }
        case 1:
        {
            try
            {
                return (new B);
            }
            catch (const std::bad_alloc& e)
            {
                std::cout << "Memory alloctaion failed : " << e.what() << std::endl;
                return (NULL);
            }
        }
        case 2:
            {
                try
                {
                    return (new C);
                }
                catch (const std::bad_alloc& e)
                {
                    std::cout << "Memory alloctaion failed : " << e.what() << std::endl;
                    return (NULL);
                }
            }
    }
    return (NULL);
}

void    identify(Base* p)
{
    if (p == dynamic_cast<A*>(p))
        std::cout << "We have identify a pointer on A base !" << std::endl;
    else if (p == dynamic_cast<B*>(p))
        std::cout << "We have identify a pointer on B base !" << std::endl;
    else if (p == dynamic_cast<C*>(p))
        std::cout << "We have identify a pointer on C base !" << std::endl;
}

void    identify(Base& p)
{
    try
    {
        static_cast<void>(p);
        p = dynamic_cast<A&>(p);
        std::cout << "We have identify a reference on A base !" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
        try
        {
            static_cast<void>(p);
            p = dynamic_cast<B&>(p);
            std::cout << "We have identify a reference on B base !" << std::endl;
            return ;
        }
        catch(const std::exception& e)
        {
            try
            {
                static_cast<void>(p);
                p = dynamic_cast<C&>(p);
                std::cout << "We have identify a reference on C base !" << std::endl;
                return ;
            }
            catch(const std::exception& e)
            {
                std::cerr << "Error on cast :" << e.what() << std::endl;
            }
        }
    }
}

int main()
{
    try
    {
        Base* base1;
        base1 = generate();
        try
        {
            identify(base1);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
            return (1);
        }
        identify(*base1);
        delete base1;
    }
    catch(const std::bad_alloc& e)
    {
        std::cerr << "Memory allocation failed : " << e.what() << std::endl;
    }
    return (0);
}