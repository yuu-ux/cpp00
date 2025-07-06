/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 20:51:22 by yehara            #+#    #+#             */
/*   Updated: 2025/07/07 02:02:00 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "phonebook.h"
#include "contact.h"


PhoneBook::PhoneBook() : size_(0) {}

Contact PhoneBook::get_contact(int index) const {
	return contacts_[index];
}

int PhoneBook::get_size() const {
	return size_;
}

void PhoneBook::Add()
{
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "first_name: ";
	std::getline(std::cin, first_name);
	contacts_[size_].set_first_name(first_name);
	std::cout << "last_name: ";
	std::getline(std::cin, last_name);
	contacts_[size_].set_last_name(last_name);
	std::cout << "nick_name: ";
	std::getline(std::cin, nick_name);
	contacts_[size_].set_nick_name(nick_name);
	std::cout << "phone_number: ";
	std::getline(std::cin, phone_number);
	contacts_[size_].set_phone_number(phone_number);
	std::cout << "darkest_secret: ";
	std::getline(std::cin, darkest_secret);
	contacts_[size_].set_darkest_secret(darkest_secret);
	size_++;
}

void PhoneBook::Search()
{
	for (int i = 0; i < size_; i++) {
		std::cout << i << " ";
		std::cout << get_contact(i).get_first_name() << " ";
		std::cout << get_contact(i).get_last_name() << " ";
		std::cout << get_contact(i).get_nick_name() << " ";
		std::cout << std::endl;
	}
}

