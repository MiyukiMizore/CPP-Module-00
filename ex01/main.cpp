/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:51:44 by mfusil            #+#    #+#             */
/*   Updated: 2023/03/10 19:23:49 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    Phonebook chibre;
    std::string cmd;

    std::cout << std::endl;
    std::cout << "WELCOME TO THE PHONEBOOK" << std::endl;
    std::cout << std::endl;
    while (!(std::cin).eof())
    {
        std::cout << "WHAT DO YOU WANT TO DO ? (ADD / SEARCH / EXIT) :  ";
        getline(std::cin, cmd);
        if (cmd == "ADD")
            chibre.add();
        else if (cmd == "SEARCH")
            chibre.search();
        else if (cmd == "EXIT")
            return (0);
        else
        {
            std::cout << std::endl;
            std::cout << "INVALID COMMAND" << std::endl;
            std::cout << std::endl;
        }
    }
    return (0);
}