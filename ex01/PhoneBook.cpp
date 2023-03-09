/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:25:53 by mfusil            #+#    #+#             */
/*   Updated: 2023/03/09 17:38:46 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Phonebook::Phonebook(void)
{
    this->nbr_of_contact = 0;
}

void    Phonebook::add(void)
{
    std::cout << "FIRST NAME :" << std::endl;
    std::cout << "LAST NAME :" << std::endl;
    std::cout << "NICKNAME :" << std::endl;
    std::cout << "PHONE NUMBER :" << std::endl;
    std::cout << "DARKEST SECRET :" << std::endl;
}

void    Phonebook::search(void)
{
    std::cout << "SALUT LES GENS C DAVID LAFARGE POKEMON" << std::endl;
}

Phonebook::~Phonebook(void)
{
    std::cout << "Destructor Called" << std::endl;
    return;
}