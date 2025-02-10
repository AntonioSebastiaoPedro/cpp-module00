/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:52:42 by ansebast          #+#    #+#             */
/*   Updated: 2025/02/10 12:47:21 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
  private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

  public:
	Contact(){}
	std::string getFirstName(void) const
	{
		return (this->first_name);
	}
	std::string getLastName(void) const
	{
		return (this->last_name);
	}
	std::string getPhone(void) const
	{
		return (this->phone_number);
	}
	std::string getNickName(void) const
	{
		return (this->nickname);
	}
	std::string getSecret(void) const
	{
		return (this->darkest_secret);
	}

	void setFirstName(std::string name)
	{
		this->first_name = name;
	}
	void setLastName(std::string name)
	{
		this->last_name = name;
	}
	void setNickName(std::string name)
	{
		this->nickname = name;
	}
	void setPhone(std::string phone)
	{
		this->phone_number = phone;
	}
	void setSecret(std::string secret)
	{
		this->darkest_secret = secret;
	}

	void	saveContact(std::string first_name, std::string last_name, std::string nickname,
				std::string phone_number, std::string darkest_secret)
	{
		this->setFirstName(first_name);
		this->setLastName(last_name);
		this->setNickName(nickname);
		this->setPhone(phone_number);
		this->setSecret(darkest_secret);
	}
};

#endif