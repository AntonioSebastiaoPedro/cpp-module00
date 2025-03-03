/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 15:24:29 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/03 13:18:39 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Utils.hpp"

bool	isIntiger(std::string str, int &number)
{
	if (str.empty())
		return (false);
	std::stringstream ss(str);
	ss >> number;
	return (!ss.fail() && ss.eof());
}

std::string	truncateStr(std::string str, size_t max_size)
{
	if (str.length() > max_size)
		return (str.substr(0, max_size - 1) + ".");
	return (str);
}

int	isEmpty(std::string field)
{
	if (field.empty())
	{
		std::cout << "This field cannot be empty. Contact canceled.\n";
		return (1);
	}
	return (0);
}