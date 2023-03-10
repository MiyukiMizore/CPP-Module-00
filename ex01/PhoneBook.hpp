/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:26:07 by mfusil            #+#    #+#             */
/*   Updated: 2023/03/10 17:08:01 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class Phonebook
{
    public:
    Phonebook(void);
    ~Phonebook(void);

    void    add(void);
    void    search(void);

    private:
    Contact contact_array[8];
    int nbr_of_contact;
    void printlist(void);
    int search_in_list(std::string cmd);
    std::string stock(const std::string& cmd);
};

#endif