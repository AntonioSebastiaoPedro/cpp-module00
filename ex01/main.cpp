/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:07:10 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/02 15:50:16 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include "Contact.hpp"
# include "Utils.hpp"

void	printInstructions(void)
{
	std::cout << "Welcome to the PhoneBook. What would you like to do?\n\n";
	std::cout << "ADD: save a new contact\n";
	std::cout << "SEARCH: display a specific contact\n";
	std::cout << "EXIT: leave the PhoneBook\n";
}

int	main(void)
{
	PhoneBook agenda;
	std::string option;
	
	printInstructions();
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
		if (option == "ADD")
		{
			addContact(&agenda);
		}
		else if (option == "SEARCH")
		{
			showAllContacts(agenda);
		}
		else if (option == "EXIT")
		{
			std::cout << "\nGoodbye!\n";
			break;
		}
		else
			std::cout << "Wrong Choice!\n";
	}
}
