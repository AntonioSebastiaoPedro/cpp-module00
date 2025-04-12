/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 15:23:15 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/12 17:24:47 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <sstream>

class PhoneBook;

bool		isIntiger(std::string str, long long &number);
std::string	truncateStr(std::string str, size_t max_size);
int		isEmpty(std::string field);

void		showContact(PhoneBook agenda);
void		addContact(PhoneBook *agenda);
void		showAllContacts(PhoneBook agenda);
bool		validatePhone( std::string phone );

# endif