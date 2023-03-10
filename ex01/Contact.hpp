/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:46:39 by mfusil            #+#    #+#             */
/*   Updated: 2023/03/10 16:58:40 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
	public:
	Contact(void);
	~Contact(void);

	void	print_contact_in_tab(int i);
	void	print_index_contact(void);
	void	contact_info(std::string info[5]);

	private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	
	std::string	trunked_string(std::string& cmd);
	void init(void);
};

#endif