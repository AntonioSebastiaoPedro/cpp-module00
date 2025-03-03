/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:52:42 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/03 12:47:17 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class PhoneBook;
class Contact
{
  private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

  public:
	std::string getFirstName(void) const;
	std::string getLastName(void) const;
	std::string getPhone(void) const;
	std::string getNickName(void) const;
	std::string getSecret(void) const;

	void setFirstName(std::string name);
	void setLastName(std::string name);
	void setNickName(std::string name);
	void setPhone(std::string phone);
	void setSecret(std::string secret);
};

#endif