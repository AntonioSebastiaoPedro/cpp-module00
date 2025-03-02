/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:48:04 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/02 14:25:52 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>

class PhoneBook
{
  private:
	int size;

  public:
	Contact contacts[8];

	PhoneBook();
	int length(void) const;
	void updateSize(void);
	void delOldest(void);
	void	saveContact(std::string first_name, std::string last_name, std::string nickname,
				std::string phone_number, std::string darkest_secret);
};

#endif