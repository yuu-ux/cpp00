/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 20:51:22 by yehara            #+#    #+#             */
/*   Updated: 2025/07/08 15:36:35 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "phonebook.h"


PhoneBook::PhoneBook() : size_(0) {}

// getter
Contact PhoneBook::get_contact(int index) const {
	return contacts_[index];
}

int PhoneBook::get_size() const {
	return size_;
}

void PhoneBook::Add() {
	std::string first_name = InputInfo("first_name: ");
	std::string last_name = InputInfo("last_name: ");
	std::string nick_name = InputInfo("nick_name: ");
	// 電話番号は追加のバリデーションが必要なため、別関数に切り出し
	std::string phone_number = InputPhoneNumber();
	std::string darkest_secret = InputInfo("darkest_secret: ");
	contacts_[size_ % kMaxContacts] = Contact(first_name, last_name, nick_name, phone_number, darkest_secret);
	size_++;
	std::cout << "登録が完了しました" << std::endl;
}

void PhoneBook::Search() const {
	if (size_ == 0) {
		std::cout << "登録されている連絡先がありません" << std::endl;
		return ;
	}
	// 一覧の表示
	PrintHead();
	PrintContact();

	// 詳細の表示
	std::cout << "詳細を確認したいインデックスを選択してください" << std::endl;
	std::string index;
	std::getline(std::cin, index);
	if (is_validate(index)) {
		PrintDetailContact(index);
	} else {
		std::cerr << "無効なインデックスです" << std::endl;
	}
}
