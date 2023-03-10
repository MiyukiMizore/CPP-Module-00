/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:25:53 by mfusil            #+#    #+#             */
/*   Updated: 2023/03/10 17:48:42 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Phonebook::Phonebook(void)
{
    this->nbr_of_contact = 0;
}

std::string Phonebook::stock(const std::string& cmd)
{
    std::string str;
    std::cout << cmd << " ";
    getline(std::cin, str);
    return (str);
}

void Phonebook::printlist(void)
{
    int i = 0;
    std::cout << std::endl;
    std::cout << std::right << "Index"
            << "|";
    std::cout << std::right << " " << "First Name"
            << "|";
    std::cout << std::right << " " << "Last Name"
            << "|";
    std::cout << std::right << " " << "Nickname"
            << "|" << std::endl;
    std::cout << std::cout.fill('-') << std::endl;
    ;
    std::cout.fill(' ');
    while (i < this->nbr_of_contact && i < 8)
    {
        this->contact_array[i].print_contact_in_tab(i);
        i++;
    }
    std::cout << std::endl;
}
int Phonebook::search_in_list(std::string cmd)
{
    if(cmd[1] == '\0')
    {
        int index = atoi(cmd.c_str());
        if (index < 1 || index > 8 || index > nbr_of_contact)
            return (1);
        this->contact_array[index - 1].print_index_contact();
        return (0);
    }
    return (1);
}

void    Phonebook::search(void)
{
    if (this->nbr_of_contact == 0)
        std::cout << "YOU HAVE NO CONTACT FOR THE MOMENT" 
        << std::endl << std::endl;
    
    else
    {
        this->printlist();
        std::string index;
        index = this->stock("WHICH CONTACT DO YOU WANT TO SEE ?");
        std::cout << std::endl;
        if (search_in_list(index) == 1)
        {
            std::cout << std::endl;
            std::cout << "CONTACT DOES NOT EXIT" << std::endl;
        }
    }
}

void    Phonebook::add(void)
{
    std::string temp[5] = {"", "", "", "", ""};
    if (this->nbr_of_contact >= 8)
        std::cout << "YOU HAVE TOO MUCH CONTACT, ERASE YOUR OLDEST" 
        << std::endl << std::endl;
    
    while (temp[0].empty()) temp[0] = Phonebook::stock("FIRST NAME :");
    while (temp[1].empty()) temp[1] = Phonebook::stock("LAST NAME :");
    while (temp[2].empty()) temp[2] = Phonebook::stock("NICKNAME :");
    while (temp[3].empty()) temp[3] = Phonebook::stock("PHONE NUMBER :");
    while (temp[4].empty()) temp[4] = Phonebook::stock("DARKEST SECRET :");
    this->contact_array[this->nbr_of_contact % 8].contact_info(temp);
    this->nbr_of_contact++;
}

Phonebook::~Phonebook(void)
{
    std::cout << std::endl << "GOODBYE PHONEBOOK" << std::endl;
    return;
}