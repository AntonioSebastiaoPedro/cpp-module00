/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 15:23:15 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/02 15:47:55 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <sstream>

class PhoneBook;

bool		isIntiger(std::string str, int &number);
std::string	truncateStr(std::string str, size_t max_size);
int		is_empty(std::string field);

void		showContact(PhoneBook agenda);
void		addContact(PhoneBook *agenda);
void		showAllContacts(PhoneBook agenda);

# endif