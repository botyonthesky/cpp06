/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:58:00 by tmaillar          #+#    #+#             */
/*   Updated: 2024/07/02 08:50:52 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

int             main(void);
Base*           generate(void);
void            identify(Base* p);
void            identify(Base& p);

#endif