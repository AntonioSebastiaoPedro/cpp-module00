/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:48:04 by ansebast          #+#    #+#             */
/*   Updated: 2025/02/10 15:03:51 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>

class PhoneBook
{
  private:
	int size;

  public:
	Contact contacts[8];

	PhoneBook(){ this->size = 0; }
	int length(void) const { return (this->size); }
	void updateSize(void) { this->size++; }
	void delOldest(void)
	{
		if (this->size >= 8)
		{
			for (int i = 0; i < size; i++)
				this->contacts[i] = this->contacts[i + 1];
			this->size = 7;
		}
	}

	void	saveContact(std::string first_name, std::string last_name, std::string nickname,
				std::string phone_number, std::string darkest_secret)
	{
		this->contacts[size].setFirstName(first_name);
		this->contacts[size].setLastName(last_name);
		this->contacts[size].setNickName(nickname);
		this->contacts[size].setPhone(phone_number);
		this->contacts[size].setSecret(darkest_secret);
		updateSize();
	}
};

#endif