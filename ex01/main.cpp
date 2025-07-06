/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 02:01:53 by yehara            #+#    #+#             */
/*   Updated: 2025/07/07 02:02:53 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"
#include <iostream>

int main(void)
{
	std::string line;
	PhoneBook phone_book;

	std::cout << "Input ADD or SEARCH or EXIT" << std::endl;
	while (true) {
		getline(std::cin, line);
		if (line == "ADD")
			phone_book.Add();
		else if (line == "SEARCH")
			phone_book.Search();
		else if (line == "EXIT")
			break ;
		else
			std::cout << "usage: ADD or SEARCH or EXIT" << std::endl;
	}
}
