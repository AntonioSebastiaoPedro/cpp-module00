/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:12:40 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/02 14:17:49 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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