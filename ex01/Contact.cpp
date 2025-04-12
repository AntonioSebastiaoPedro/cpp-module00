/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:12:40 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/12 17:30:23 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include "Contact.hpp"
# include "Utils.hpp"
# include <iomanip>

std::string Contact::getFirstName(void) const
{
	return (this->first_name);
}

std::string Contact::getLastName(void) const
{
	return (this->last_name);
}

std::string Contact::getPhone(void) const
{
	return (this->phone_number);
}

std::string Contact::getNickName(void) const
{
	return (this->nickname);
}

std::string Contact::getSecret(void) const
{
	return (this->darkest_secret);
}

void	Contact::setFirstName(std::string name)
{
	this->first_name = name;
}

void	Contact::setLastName(std::string name)
{
	this->last_name = name;
}

void	Contact::setNickName(std::string name)
{
	this->nickname = name;
}

void	Contact::setPhone(std::string phone)
{
	this->phone_number = phone;
}

void	Contact::setSecret(std::string secret)
{
	this->darkest_secret = secret;
}

void	showContact(PhoneBook agenda)
{
	long long	index;
	std::string	input;
	
	std::cout << "Enter the index of the contact you want to show: ";
	std::getline(std::cin, input);
	if (!isIntiger(input, index))
	{
		std::cout << "Invalid Index!\n\n";
		return;	
	}
	if (!(index >= 0 && index < agenda.length()))
	{
		std::cout << "There is no contact in the Phonebook with this index\n\n";
		return;
	}
	Contact contact = agenda.contacts[index];
	std::cout << "\nFirst Name: " << contact.getFirstName() << "\n";
	std::cout << "Last Name: " << contact.getLastName() << "\n";
	std::cout << "Nickname: " << contact.getNickName() << "\n";
	std::cout << "Phone Number: " << contact.getPhone() << "\n";
	std::cout << "Darkest Secret: " << contact.getSecret() << "\n";
}

void	showAllContacts(PhoneBook agenda)
{
	if (agenda.length() == 0)
	{
		std::cout << "There is no contact in the PhoneBook\n\n";
		return ;
	}
	std::cout << "---------------- Contact List ---------------\n";
	std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
	for (int i = 0; i < agenda.length(); i++)
	{
		Contact contact = agenda.contacts[i];
		std::cout << "|" << std::setw(10) << i << "|";
		std::cout << std::setw(10) << truncateStr(contact.getFirstName(), 10) << "|";
		std::cout << std::setw(10) << truncateStr(contact.getLastName(), 10) << "|";
		std::cout << std::setw(10) << truncateStr(contact.getNickName(), 10) << "|\n";
	}
	std::cout << "---------------------------------------------\n\n";
	showContact(agenda);
}

void	addContact(PhoneBook *agenda)
{
	std::string fields[5];
	std::string field_name[] = {
		"first name",
		"last name",
		"nickname",
		"phone number",
		"darkest secret"
	};
	
	std::cout << "\n";
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Insert the " << field_name[i] << ": ";
		std::getline(std::cin, fields[i]);
		if (std::cin.eof())
		{
			std::cout << "\nInput canceled. Contact not saved\n";
			std::cin.clear();
			return ;
		}
		if (isEmpty(fields[i]))
			return ;
		if (i == 3)
		{
			if (!validatePhone(fields[3])){
				std::cout << "Contact canceled.\n";
				return ;
			}
		}
	}
	agenda->delOldest();
	agenda->saveContact(fields[0], fields[1], fields[2], fields[3], fields[4]);
	std::cout << "\nContact Saved successfully!\n";
}

bool	validatePhone( std::string phone )
{
	std::string phoneNumber;
	long long number;
	
	if (!isdigit(phone.at(0)) && phone.at(0) != '+')
	{
		std::cout << "Invalidddddddd phone number\n\n";
		return (false);
	}
	if (phone.length() < 8 || phone.length() > 16 || (phone.at(0) == '+' && phone.length() < 12))
	{
		std::cout << "Invalid number of digits\n";
		return (false);
	}
	if (phone.at(0) == '+'){
		phoneNumber = phone.substr(1);
	} else {
		phoneNumber = phone.substr(0);
	}
	if (!isIntiger(phoneNumber, number))
	{
		std::cout << "Invalid phone number\n";
		return (false);
	}
	return (true);
}
