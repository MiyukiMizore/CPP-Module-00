/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:02:04 by mfusil            #+#    #+#             */
/*   Updated: 2023/03/10 17:32:46 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void)
{
	this->init();
}

Contact::~Contact(void) {}

void	Contact::init(void)
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->darkest_secret = "";
}

std::string	Contact::trunked_string(std::string& cmd)
{
	std::string	trunks;

	if (cmd.length() <= 10)
		return (cmd);
	trunks = cmd.substr(0, 9);
	trunks.append(1, '.');
	return (trunks);
}

void	Contact::print_index_contact(void)
{
	std::cout << std::left << "FIRST NAME : ";
	std::cout << this->first_name << std::endl;
	std::cout << std::left << "LAST NAME : ";
	std::cout << this->last_name << std::endl;
	std::cout << std::left << "NICKNAME : ";
	std::cout << this->nickname << std::endl;
	std::cout << std::left << "PHONE NUMBER : ";
	std::cout << this->phone_number << std::endl;
	std::cout << std::left << "DARKEST SECRET : ";
	std::cout << this->darkest_secret << std::endl;
	std::cout << std::endl;
}

void	Contact::print_contact_in_tab(int i)
{
	std::cout.width(5);
	std::cout << std::right << i + 1 << "|";
	std::cout.width(10);
	std::cout << std::right << trunked_string(this->first_name) << "|";
	std::cout.width(10);
	std::cout << std::right << trunked_string(this->last_name) << "|";
	std::cout.width(10);
	std::cout << std::right << trunked_string(this->nickname) << "|" << std::endl;	
}

void	Contact::contact_info(std::string info[5])
{
	this->first_name = info[0];
	this->last_name = info[1];
	this->nickname = info[2];
	this->phone_number = info[3];
	this->darkest_secret = info[4];
}
