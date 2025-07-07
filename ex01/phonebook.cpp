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
#include <iomanip>
#include "phonebook.h"
#include "contact.h"


PhoneBook::PhoneBook() : size_(0) {}

Contact PhoneBook::get_contact(int index) const {
	return contacts_[index];
}

int PhoneBook::get_size() const {
	return size_;
}

std::string PhoneBook::InputInfo(std::string prompt) {
	std::string line;

	while (true) {
		std::cout << prompt;
		std::getline(std::cin, line);
		if (line.empty()) {
			std::cerr << "もう一度入力してください" << std::endl;
		} else {
			break ;
		}
	}
	return line;
}

bool is_numeric(std::string str) {
	for (size_t i = 0; i < str.length(); i++) {
		if (!std::isdigit(str[i]))
			return false;
	}
	return true;
}

std::string PhoneBook::InputPhoneNumber() {
	std::string line;

	while (true) {
		std::cout << "phone_number: ";
		std::getline(std::cin, line);
		if (line.empty()) {
			std::cerr << "Empty Input" << std::endl;
		} else if (line.length() != 10 || !is_numeric(line)) {
			std::cerr << "Invalid phone number format" << std::endl;
		} else {
			break ;
		}
	}
	return line;
}

void PhoneBook::Add() {
	std::string first_name = InputInfo("first_name: ");
	std::string last_name = InputInfo("last_name: ");
	std::string nick_name = InputInfo("nick_name: ");
	// 電話番号は追加のバリデーションがあるため、別関数に切り出し
	std::string phone_number = InputPhoneNumber();
	std::string darkest_secret = InputInfo("darkest_secret: ");
	contacts_[size_] = Contact(first_name, last_name, nick_name, phone_number, darkest_secret);
	size_++;
}

std::string FormatChar(std::string str) {
	if (str.length() <= 10) {
		return str;
	}

	std::string new_str = str.substr(0, 10);
	new_str.at(9) = '.';
	return new_str;
}

void PrintHead() {
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first_name" << "|";
	std::cout << std::setw(10) << "last_name" << "|";
	std::cout << std::setw(10) << "nick_name" << "|";
	std::cout << std::setw(10) << std::endl;
}
void PhoneBook::Search() {
	PrintHead();
	for (int i = 0; i < size_; i++) {
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << FormatChar(get_contact(i).get_first_name()) << "|";
		std::cout << std::setw(10) << FormatChar(get_contact(i).get_last_name()) << "|";
		std::cout << std::setw(10) << FormatChar(get_contact(i).get_nick_name()) << "|";
		std::cout << std::setw(10) << std::endl;
	}
	std::cout << "詳細を確認したいインデックスを選択してください" << std::endl;
	std::string index;
	std::getline(std::cin, index);
}

