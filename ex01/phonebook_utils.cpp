/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 15:34:06 by yehara            #+#    #+#             */
/*   Updated: 2025/07/08 15:35:21 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"
#include "utils.h"

const int kMobilePhoneNum = 11;
const int kLandlinePhoneNum = 10;
const int kDisplayColumn = 10;

std::string PhoneBook::InputInfo(std::string prompt) {
	std::string line;

	while (true) {
		std::cout << prompt;
		std::getline(std::cin, line);
		if (std::cin.eof()) {
			break ;
		}
		if (line.empty() || is_only_space(line)) {
			std::cerr << "入力情報がありません" << std::endl;
		} else {
			break ;
		}
	}
	return line;
}

std::string PhoneBook::InputPhoneNumber() {
	std::string line;

	while (true) {
		std::cout << "phone_number: ";
		std::getline(std::cin, line);
		if (std::cin.eof()) {
			break ;
		}
		size_t line_length = line.length();
		if (line.empty() || is_only_space(line)) {
			std::cerr << "入力情報がありません" << std::endl;
		} else if ((line_length != kMobilePhoneNum && line_length != kLandlinePhoneNum) || !is_numeric(line)) {
			std::cerr << "電話番号のフォーマットが適切じゃありません" << std::endl;
		} else {
			break ;
		}
	}
	return line;
}

bool PhoneBook::is_validate(std::string index) const {
	if (index.empty() || !is_numeric(index)) {
		return false;
	}
	int _index = std::atoi(index.c_str());
	if (0 > _index || (std::min(size_, kMaxContacts) - 1) < _index) {
		return false;
	}
	return true;
}

void PhoneBook::PrintContact() const {
	for (int i = 0; i < std::min(size_, kMaxContacts); i++) {
		Contact contact = get_contact(i);
		std::cout << std::setw(kDisplayColumn) << i << "|";
		std::cout << std::setw(kDisplayColumn) << FormatChar(contact.get_first_name()) << "|";
		std::cout << std::setw(kDisplayColumn) << FormatChar(contact.get_last_name()) << "|";
		std::cout << std::setw(kDisplayColumn) << FormatChar(contact.get_nick_name()) << "|";
		std::cout << std::endl;
	}
}

void PhoneBook::PrintDetailContact(std::string index) const {
	int _index = std::atoi(index.c_str());
	Contact contact = get_contact(_index);

	std::cout << "first_name: " << contact.get_first_name() << std::endl
	<< "last_name: " << contact.get_last_name() << std::endl
	<< "nick_name: " << contact.get_nick_name() << std::endl
	<< "phone_number: " << contact.get_phone_number() << std::endl
	<< "darkest_secret: " << contact.get_darkest_secret() << std::endl;
}
