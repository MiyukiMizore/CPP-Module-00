/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:25:53 by mfusil            #+#    #+#             */
/*   Updated: 2023/03/08 18:58:28 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Phonebook::Phonebook(void)
{
    this->nbr_of_contact = 0;
}

Phonebook::~Phonebook(void)
{
    std::cout << "Destructor Called" << std::endl;
    return;
}