/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:07:10 by ansebast          #+#    #+#             */
/*   Updated: 2025/02/10 21:53:54 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <limits>

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
	if (agenda.length() == 0)
	{
		std::cout << "There is no contact in the PhoneBook\n\n";
		return ;
	}
	
	for (int i = 0; i < agenda.length(); i++)
	{
		std::cout << "Index: " << i << "\n";
		showContact(agenda.contacts[i]);
		std::cout << std::endl;
	}
}

int	is_empty(std::string field)
{
	if (field.empty())
	{
		std::cout << "This field cannot be empty. Contact canceled.\n";
		return (1);
	}
	return (0);
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
		if (is_empty(fields[i]))
			return ;
	}
	agenda->delOldest();
	agenda->saveContact(fields[0], fields[1], fields[2], fields[3], fields[4]);
	std::cout << "\nContact Saved successfully!\n";
}

int	main(void)
{
	PhoneBook agenda;
	std::string option;
	
	std::cout << "Welcome to the PhoneBook. What would you like to do?\n\n";
	std::cout << "ADD: save a new contact\n";
	std::cout << "SEARCH: display a specific contact\n";
	std::cout << "EXIT: leave the PhoneBook\n";
	while (true)
	{
		std::cout << "\nChoose an option: ";
		if (!std::getline(std::cin, option))
		{
			if (std::cin.eof())
			{
				std::cout << "\nGoodbye!\n";
				break ;
			}
			std::cin.clear()	;
			continue;
		}
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
			std::cout << "\nGoodbye!\n";
			break;
		}
		else
			std::cout << "Wrong Choice!\n";
	}
}
