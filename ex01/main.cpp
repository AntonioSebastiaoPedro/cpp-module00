/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:07:10 by ansebast          #+#    #+#             */
/*   Updated: 2025/02/10 14:38:06 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

void	showContact(Contact contact)
{
	std::cout << "First Name: " << contact.getFirstName() << "\n";
	std::cout << "Last Name: " << contact.getLastName() << "\n";
	std::cout << "Nickname: " << contact.getNickName() << "\n";
	std::cout << "Phone Number: " << contact.getPhone() << "\n";
	std::cout << "Darkest Secret: " << contact.getSecret() << "\n";
}

void	showAllContacts(PhoneBook agenda)
{
	for (int i = 0; i < agenda.length(); i++)
	{
		std::cout << "Index: " << i << "\n";
		showContact(agenda.contacts[i]);
		std::cout << std::endl;
	}
}

void	addContact(PhoneBook *agenda)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone;
	std::string secret;
	
	std::cout << "Insert the first name: ";
	std::cin >> first_name;
	std::cout << "Insert the last name: ";
	std::cin >> last_name;
	std::cout << "Insert the nick name: ";
	std::cin >> nickname;
	std::cout << "Insert the phone number: ";
	std::cin >> phone;
	std::cout << "Insert the darkest secret: ";
	std::cin >> secret;
	agenda->delOldest();
	agenda->saveContact(first_name, last_name, nickname, phone, secret);
	std::cout << "Contact Saved!\n";
}

int	main(void)
{
	PhoneBook agenda;
	std::string option;
	
	std::cout << "Welcome to the PhoneBook. What would you like to do?\n\n";
	std::cout << "ADD: save a new contact\n";
	std::cout << "SEARCH: display a specific contact\n";
	std::cout << "EXIT: leave the PhoneBook\n\n";
	while (true)
	{
		std::cout << "Choose an option: ";
		std::cin >> option;
		if (option.empty())
			break ;
		if (option == "A")
		{
			addContact(&agenda);
		}
		else if (option == "S")
		{
			showAllContacts(agenda);
		}
		else if (option == "E")
		{
			std::cout << "Goodbye!\n";
			return (0);
		}
		else
			std::cout << "Wrong Choice!\n";
		std::cout << "\n";
	}
}
