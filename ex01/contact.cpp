/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 01:01:53 by yehara            #+#    #+#             */
/*   Updated: 2025/07/07 01:55:02 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.h"

Contact::Contact() {
	first_name_ = "";
	last_name_ = "";
	nick_name_ = "";
	phone_number_ = "";
	darkest_secret_ = "";
}

Contact::Contact(std::string first_name, std::string last_name, std::string nick_name, std::string phone_number, std::string darkest_secret) {
	first_name_ = first_name;
	last_name_ = last_name;
	nick_name_ = nick_name;
	phone_number_ = phone_number;
	darkest_secret_ = darkest_secret;
}

std::string Contact::get_first_name() const {
	return (first_name_);
}

std::string Contact::get_last_name() const {
	return (last_name_);
}

std::string Contact::get_nick_name() const {
	return (nick_name_);
}

std::string Contact::get_phone_number() const {
	return (phone_number_);
}

std::string Contact::get_darkest_secret() const {
	return (darkest_secret_);
}

