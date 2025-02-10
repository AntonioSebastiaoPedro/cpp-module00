/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 17:11:00 by ansebast          #+#    #+#             */
/*   Updated: 2025/02/10 09:57:26 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string strtoupper(std::string str)
{
	std::string new_str = str;
	for (size_t i = 0; i < str.length(); i++)
		new_str[i] = std::toupper(str[i]);
	return (new_str);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
			std::cout << strtoupper(av[i]);
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << "\n";
	return (0);
}
