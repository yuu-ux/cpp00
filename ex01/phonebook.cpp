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

void PhoneBook::InputPhoneBook(std::string prompt, void (Contact::*setter)(std::string)) {
    std::string line;

	std::cout << prompt;
	std::getline(std::cin, line);
    (contacts_[size_].*setter)(line);
}

void PhoneBook::Add() {
    InputPhoneBook("first_name: ", &Contact::set_first_name);
    InputPhoneBook("last_name: ", &Contact::set_last_name);
    InputPhoneBook("nick_name: ", &Contact::set_nick_name);
    InputPhoneBook("phone_number: ", &Contact::set_phone_number);
    InputPhoneBook("darkest_secret: ", &Contact::set_darkest_secret);
	size_++;
}

void PhoneBook::Search() {
	for (int i = 0; i < size_; i++) {
		std::cout << i << " ";
		std::cout << get_contact(i).get_first_name() << " ";
		std::cout << get_contact(i).get_last_name() << " ";
		std::cout << get_contact(i).get_nick_name() << " ";
		std::cout << std::endl;
	}
}

