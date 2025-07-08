/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 14:52:49 by yehara            #+#    #+#             */
/*   Updated: 2025/07/08 15:17:30 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

const int kDisplayColumn = 10;
const int kMaxDisplayMessage = 10;

bool is_only_space(std::string line) {
	for (size_t i = 0; i < line.length(); i++) {
		if (!std::isspace(line[i])) return false;
	}
	return true;
}

bool is_numeric(std::string str) {
	for (size_t i = 0; i < str.length(); i++) {
		if (!std::isdigit(str[i]))
			return false;
	}
	return true;
}

void PrintHead() {
	std::cout << std::setw(kDisplayColumn) << "index" << "|";
	std::cout << std::setw(kDisplayColumn) << "first_name" << "|";
	std::cout << std::setw(kDisplayColumn) << "last_name" << "|";
	std::cout << std::setw(kDisplayColumn) << "nick_name" << "|";
	std::cout << std::endl;
}

std::string FormatChar(std::string str) {
	if (str.length() <= kMaxDisplayMessage) {
		return str;
	}

	std::string new_str = str.substr(0, kMaxDisplayMessage);
	new_str.at(kMaxDisplayMessage - 1) = '.';
	return new_str;
}
