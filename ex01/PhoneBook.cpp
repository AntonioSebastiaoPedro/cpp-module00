/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:21:23 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/02 14:22:43 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){ this->size = 0; }

int PhoneBook::length(void) const { return (this->size); }

void PhoneBook::updateSize(void) { this->size++; }

void PhoneBook::delOldest(void)
{
	if (this->size >= 2)
	{
		for (int i = 0; i < size; i++)
		{
			if (i + 1 < size)
				this->contacts[i] = this->contacts[i + 1];
		}
		this->size = 1;
	}
}

void	PhoneBook::saveContact(std::string first_name, std::string last_name, std::string nickname,
			std::string phone_number, std::string darkest_secret)
{
	this->contacts[size].setFirstName(first_name);
	this->contacts[size].setLastName(last_name);
	this->contacts[size].setNickName(nickname);
	this->contacts[size].setPhone(phone_number);
	this->contacts[size].setSecret(darkest_secret);
	updateSize();
}