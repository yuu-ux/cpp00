/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 02:01:53 by yehara            #+#    #+#             */
/*   Updated: 2025/07/08 15:39:51 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int main(void)
{
	std::string line;
	PhoneBook phone_book;

	std::cout << "----------Welcome to Phonebook----------" << std::endl << std::endl;
	while (true) {
		std::cout << "ADD or SEARCH or EXIT: ";
		getline(std::cin, line);
		if (std::cin.eof()) {
			std::cout << "EOF" << std::endl;
			break ;
		}
		if (line == "ADD")
			phone_book.Add();
		else if (line == "SEARCH")
			phone_book.Search();
		else if (line == "EXIT")
			break ;
		else
			std::cout << "※ コマンドを入力してください" << std::endl;
	}
}
