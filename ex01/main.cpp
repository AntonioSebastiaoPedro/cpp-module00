/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:07:10 by ansebast          #+#    #+#             */
/*   Updated: 2025/02/10 10:29:57 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string option;
	std::cout << "Welcome to the PhoneBook. What would you want to do?\n";
	std::cout << "ADD: save a new contact\n";
	std::cout << "SEARCH: display a specific contact\n";
	std::cout << "EXIT: leave the PhoneBook\n\n";
	while (true)
	{
		std::cout << "Choose an option: ";
		std::cin >> option;
		if (option.empty())
			break;
		if (option == "ADD")
		{
			std::cout << "++++\n";
		}
		else if (option == "SEARCH")
		{
			std::cout << "/`/`/`/`\n";
		}
		else if (option == "EXIT")
		{
			std::cout << "Goodbye!\n";
			return (0);
		}
		else
			std::cout << "Wrong Choice!\n";
		std::cout << "\n";
	}
}
